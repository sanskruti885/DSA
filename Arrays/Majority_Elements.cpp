// You are given an array of integer arr[] where each number represents a vote
// to a candidate. Return the candidates that have votes greater than one-third(n/3)
// of the total votes, If there's not a majority vote, return an empty array
// Input: arr[] = [2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6]
// Output: [5, 6]
// Required: T.C O(n), Space: O(1)
// 2 approach 
// 1) Hashmap: T.C O(n), but...............O(1)
// 2) Moore algorithm T.C O(n), Space: O(1)

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

void hashmap_majority(vector<int> vecArray){
    unordered_map<int,int> voteCount;   // ex: 2 2 3 1 2 4 3
    int n = vecArray.size();
    vector<int> res;
    //count frequency
    for(int vote: vecArray){
        voteCount[vote]++;        // key 2: 3 count
    }

    // check if greater than n/3
    for(const auto& pair : voteCount){
        if(pair.second > n/3){  //here pair.first=key, pair.second=freq/count
            res.push_back(pair.first);
        }
    }

    // sort(res.begin(),res.end());
    
    // display the result
    cout<<"[";
    for(int i=0;i<res.size();i++){
        cout<<res[i];
    }
    cout<<"]";
}

 vector<int> findMajority(vector<int>& arr) {
        // Code here
        int ele1=-1,ele2=-1,cnt1=0,cnt2=0;
        int size = arr.size();
        
        for(int i=0;i<size;i++){
            if(ele1 == arr[i])
                cnt1++;
            else if(ele2 == arr[i])
                cnt2++;
            else if(cnt1 == 0){
                ele1 = arr[i];
                cnt1++; 
            }
            else if(cnt2 == 0){
                ele2 = arr[i];
                cnt2++;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        
        cnt1 =0,cnt2=0;
        for(int i=0;i<size;i++){
            if(ele1 == arr[i]){
                cnt1++;
            }
            if(ele2 == arr[i]){
                cnt2++;
            }
        }
        
        vector<int> res;
        if(cnt1>size/3){
           res.push_back(ele1); 
        }
        if(cnt2>size/3 && ele1!=ele2){
            res.push_back(ele2);
        }
        
        if(res.size() == 2 && res[0]>res[1] ){
            swap(res[0],res[1]);
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
    int choice;
    cout<<"Enter choice: \n1.Hashmap\n2.Moore algorithm";
    cin>>choice;

    if(choice == 1){
        hashmap_majority(v);
    }
    else if(choice == 2){
        vector<int> res = findMajority(v);
        for(int i : res){
            cout<<i<<endl;
        }
    }

    return 0;
}