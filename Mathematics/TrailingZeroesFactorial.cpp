// Find number of trailing zeroes in the factorial
// ex: 5!=120, trailing zero is 1
// count number of occurence of 5
// Time Complexity θ(log5n)
#include <iostream>
using namespace std;

int no_trailing_zeroes(int n)
{
    int no_zeroes = 0;
    // till 15 that means 5,10,15 we get 1 zero therefore divide by 5, but 25 = 5*5 here
    // we have two 5 therefore here divide by 25
    for (int i = 5; i <= n; i = i * 5)
    {
        no_zeroes = no_zeroes + n / i;
    }
    return no_zeroes;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "\nTrailing zeroes are: " << no_trailing_zeroes(num);
    return 0;
}