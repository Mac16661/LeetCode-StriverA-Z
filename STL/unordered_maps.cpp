//TODO: map is for storing the keys in  sorted order to which increase the time complexity of insertion --> alternative UNORDERED MAP
#include "bits/stdc++.h"
using namespace std;

int main() {
    int arr[5] = {3,1,3,1,5};
    unordered_map<int,int> mp;

    for(int i=0; i<5; i++) {
        mp[arr[i]]++; //inserting elements into the map -> make arr[i] the key if not already present in the map ds and increment its value by 1
    }

    //fetching elements
    cout<< mp[3]<<endl;
    cout<< mp[1]<<endl;
    cout<< mp[5]<<endl;

    //iterating through the map
    for(auto it: mp) {
        cout<<it.first<< " -> "<<it.second<<endl;
    }
    return 0;
}