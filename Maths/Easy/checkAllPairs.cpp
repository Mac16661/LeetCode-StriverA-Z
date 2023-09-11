//TODO: Optimized using hash maps
#include<bits/stdc++.h>
using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    unordered_map<int,int> m;
    for(int x: nums){
        m[x]++;
    }
    int ans = 0;

    // cout<<"Unordered map \n";
    // for(auto i : m) {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<endl;


    //**calc no of ways to choose 2 items(combinations) from a set of "n" distinct items without considering the orderof selection
    for(auto i: m){
        ans += (i.second * (i.second- 1))/2;
        // cout<< i.second<<" : "<<(i.second * (i.second- 1))/2<<endl;
    }
    return ans;
}

int main() {
    vector<int> nums =  {1,2,3,1,1,3};
    cout<<numIdenticalPairs(nums);
    return 0;
}
