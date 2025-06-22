// You are given an array arr[] of non-negative integers. 
// Your task is to move all the zeros in the array to the right end
//  while maintaining the relative order of the non-zero elements. 
// The operation must be performed in place, meaning you should not 
// use extra space for another array.

// Examples:

// Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
// Output: [1, 2, 4, 3, 5, 0, 0, 0]
// Explanation: There are three 0s that are moved to the end.
#include <iostream>
#include <vector> 
using namespace std;

void pushZerosToEnd(vector<int>& arr) {
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            swap(arr[count], arr[i]);
            count++;
        }
    }
    cout << "\nElements after pushing zeros to end: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
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

    pushZerosToEnd(v);
    return 0;
}
