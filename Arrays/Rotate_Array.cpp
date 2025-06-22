// Given an array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. Do the mentioned change in the array in place.

// Note: Consider the array as circular.

// Examples :

// Input: arr[] = [1, 2, 3, 4, 5], d = 2
// Output: [3, 4, 5, 1, 2]
// Explanation: when rotated by 2 elements, it becomes 3 4 5 1 2.
#include <iostream>
#include <vector> 
using namespace std;

void reverseArray(vector<int>& arr, int start, int end){
        int left = start;
        int right = end;
        
        while(left<right){
            swap(arr[left],arr[right]);
            left+=1;
            right-=1;
        }
    }

void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        d%=n;   // even if difference size greater than array size applicable
        reverseArray(arr,0,d-1); // rotate first half
        reverseArray(arr,d,n-1); //rotate second half
        reverseArray(arr,0,n-1); // rotate whole array
        
}



int main() {
    int n,d;
    cout << "Enter array size: ";
    cin >> n;
    cout<<"\nEnter difference: ";
    cin>>d;
    vector<int> v(n); 

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    rotateArr(v,d);
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
}