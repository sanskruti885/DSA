// Given an array prices[] of length n, representing the prices of the stocks on different days.
// The task is to find the maximum profit possible by buying and selling the stocks on different 
// days when at most one transaction is allowed. Here one transaction means 1 buy + 1 Sell. 
// If it is not possible to make a profit then return 0.

// Note: Stock must be bought before being sold.
// Input: prices[] = [7, 10, 1, 3, 6, 9, 2]
// Output: 8
// Explanation: You can buy the stock on day 2 at price = 1 and sell it on day 5 at price = 9.
// Hence, the profit is 8.
// T.C = O(n), S.C = O(1)
#include<iostream>
#include<vector>
using namespace std;

int maximumProfit(vector<int> &prices) {
        // code here
        int n = prices.size();
        int res = 0;
        int buy_min = prices[0];
        for(int i=0;i<n;i++){
            buy_min = min(buy_min,prices[i]);
            res = max(res,prices[i]-buy_min);
        }
        return res;
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

    cout<<"Max profit: "<<maximumProfit(v);

    return 0;
}