// You are given an array of integers arr[]. 
// Your task is to reverse the given array.
// Note: Modify the array in place.
// Time complexity O(logn)
#include <iostream>
#include <vector> 
using namespace std;

void reverseArray(vector<int> &arr) {
        // code here
        int left = 0;
        int right = arr.size()-1;
        while(left<right){
            swap(arr[left],arr[right]);
            left+=1;
            right-=1;
        }
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<endl;
        }
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> v(n); 

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    reverseArray(v);
}