// count the number of digit
// time complexity θ(n)
#include<iostream>
using namespace std;

int count_digit(int num){
    int res=0;
    while(num>0){
        num/=10;
        res++;
    }
    return res;
}
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"Total digits: "<<count_digit(num);
    return 0;
}

