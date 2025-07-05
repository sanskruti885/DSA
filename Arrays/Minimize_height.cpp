// Given an array arr[] denoting heights of N towers and a positive integer K.
// For each tower, you must perform exactly one of the following operations
// exactly once.
// Increase the height of the tower by K
// Decrease the height of the tower by K
// Find out the minimum possible difference between the height of the shortest
// and tallest towers after you have modified each tower.
// T.C = O(nlogn)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minimize_height(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        sort(arr.begin(),arr.end()); // O(nlogn)
        int minH,maxH;
        int diff = arr[n-1] - arr[0];
        // int smallest = arr[0]+k, largest = arr[n-1]-k
        for(int i=1;i<n;i++){
            if(arr[i]-k<0)
                continue;
            minH = min(arr[0]+k,arr[i]-k); //minH = min(smallest,arr[i]-k);
            maxH = max(arr[n-1]-k,arr[i-1]+k); //maxH = max(largest,arr[i-1]+k);
            diff = min(diff,maxH-minH);
        }
        return diff;

        
}

int main(){
     int n;

    cout << "Enter array size: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;
    cout<<"\nEnter k value: ";
    cin>>k;
    cout<<"Max profit: "<<minimize_height(v,k);

    return 0;
}