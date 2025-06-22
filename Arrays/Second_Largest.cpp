// Given an array of positive integers arr[], return the second largest 
// element from the array. If the second largest element doesn't exist 
// then return -1.
// Note: The second largest element should not be equal to the largest element.
// Examples:
// Input: arr[] = [12, 35, 1, 10, 34, 1]
// Output: 34
#include <iostream>
#include <vector> 
using namespace std;

 int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int first = -1;
        int second = -1;
        
        if (n<2){
            return -1;
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]>first){
                second = first;
                first = arr[i];
            }
            else if(arr[i]>second && arr[i]!=first){
                second = arr[i];
            }
        }
        
        return second;
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

    cout<<"\nSecond largest: "<<getSecondLargest(v);
    return 0;
}
