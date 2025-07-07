// insert : O(n)
// delete : O(n)
// search : O(n) -> Unsorted, O(logn) -> Sorted
// update : O(1) -> index known
// Get : O(1)
#include<iostream>
using namespace std;

void insert_ele(int arr[], int n, int cap, int ele, int pos){
    if(n == cap){
        cout<<"\nFULL CAPACITY";
    }
    for(int i=n-1;i>=pos-1;i--){
        arr[i+1] = arr[i];
    }
    arr[pos-1] = ele;
    cout<<"\nArray is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void delete_ele(int arr[], int n, int ele){
    int i;
    for(i=0;i<n;i++){
        if(arr[i] == ele)
            break;
    }
    if(i ==  n)
        return;
    for(int j=i;j<n-1;j++){
        arr[i] = arr[i+1];
    }
    cout<<"\nArray is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n,cap,ele,pos;

    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout<<"\nEnter capacity now: ";
    cin>>cap;
    cout << "Enter elements:\n";
    for (int i = 0; i < cap; i++)
    {
        cin >> arr[i];
    }
    cout<<"\nEnter element and position; ";
    cin>>ele>>pos;
    insert_ele(arr,n,cap,ele,pos);

    cout<<"\nEnter element to delete: ";
    cin>>ele;
    delete_ele(arr,n,ele);
    return 0;
}