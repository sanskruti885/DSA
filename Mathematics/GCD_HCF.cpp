// find greatest common factor -->naive,euclidean algorithm
// 15,20 ---->15= 1,3,5,15          20 = 1,2,4,5,20    gcf-->5
// (Naive)Time Complexity O(min(a,b)) = O(n)
// (Euclidean)Time Complexity O(log(min(a,b))) = O(logn)
#include<iostream>
#include<algorithm>
using namespace std;

int naive_gcf(int a,int b){
    int factor=1;
    for(int i=min(a,b);i>1;i--){
        if(a%i == 0 && b%i == 0){
            factor = i;
            break;  //important else it will give the smallest factor
        }
    } 
    return factor;  
}

// in b always the smaller value comes
// Euclidean states a>b then a%b if b>a then b%a if a=0 then b is factor else a
int euclidean_gcf(int a,int b){
    int temp;
    while(b!=0){
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int eulidean_gcf_more_loc(int a,int b){
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    else return a;
}

int recur_gcf(int a, int b){
    if (b==0) return a;
    return recur_gcf(b,a%b);
}
int main()
{
    int a,b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "\nNaive approach gcf: " <<naive_gcf(a,b);
    cout<<"\nEuclidean approch gcf: "<<euclidean_gcf(a,b);
    return 0;
}


