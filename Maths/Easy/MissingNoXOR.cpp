//TODO: prev approches are using sort or finding the sum of n natural numbers but now with XOR
#include "bits/stdc++.h"
using namespace std;

// Input: nums = [9,6,4,2,3,5,7,0,1]
// Output: 8

//XOR x with all the elements in arr and then in another loop xor x with lenght of arr's i value
int main() {
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    int x = 0;

    for(int i: nums){
        x^=i;
    }

    for(int i=0; i<=nums.size(); i++){
        x^=i;
    }
    // cout<<x<<endl;

    //TODO: same thing with more simpler approach
    int sum=0;
    for(int i: nums){
        sum+=i;
    }

    for(int i=0; i<=nums.size(); i++){
        sum-=i;
    }

    cout<<abs(sum)<<endl;
    return 0;
}