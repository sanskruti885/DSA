// find palindrome of number ----> is 121 when reversed the same
// if yes---> is palindrome
// if not---> is not
// Time complexit θ(n)
#include <iostream>
using namespace std;

void palindrome(int num)
{
    int original = num;
    int rem, rev = 0;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (original == rev)
    {
        cout <<"Number is palindrome.";
        return;
    }
    cout <<"Number is not palindrome.";
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Is number palindrome?\n ";
    palindrome(num);
    return 0;
}