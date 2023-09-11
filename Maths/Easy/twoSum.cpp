//TODO: Optimized
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
       
        //hashmap is used to store the difference of target as a key and value as an index and then we find whether the difference is present the map if yes then return current value and value of the key 
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(target - nums[i]) == mp.end())
                mp[nums[i]] = i;
            else
                return {mp[target - nums[i]], i};
        }
 
        return {-1, -1};
    }

int main() {
    vector<int> nums = {2,7,11,15};
    vector<int> ans = twoSum(nums, 9);

    for(auto i : ans) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}