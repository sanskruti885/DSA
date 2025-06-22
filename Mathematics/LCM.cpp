// Find least comman multiple LCM
// max(a,b) = min multiple
// a*b = lcm(a,b)*hcf(a,b)
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int naive_lcm(int a, int b)
{
    int res = max(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0)
        {
            return res;
        }
        res++;
    }
}
int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "\nLCM naive approach: " <<lcm(a, b);
    cout<<"\nLCM efficient approach: "<<naive_lcm(a,b);
    return 0;
}