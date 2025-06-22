// Find a factorial of num
// 2 approches
// 1.Iterative: Time complexit θ(n), Auxillary Space θ(1)
// 2.Recursive: Time complexit θ(n), Auxillary Space θ(n) since stack used
#include <iostream>
using namespace std;

 
int iter_fact(int n){
    int res=1;
    for(int i=2;i<=n;i++){
        res*=i;
    }
    return res;
}

// Time complexit θ(n)
// Auxilary 
int recursive_fact(int n){
    if (n == 0)
        return 1;
    return n*recursive_fact(n-1);
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Factorial of number using iterative approach:  "<<iter_fact(num);
    cout << "\nFactorial of number using recursive approach:  "<<recursive_fact(num);
    return 0;
}