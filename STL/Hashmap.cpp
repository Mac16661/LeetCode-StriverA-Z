#include "bits/stdc++.h"
using namespace std;

int main() {
    int n=8;
    int arr[n] = {3,2,3,1,4,2,4,11};
    
    //precomputation -> need to find the max arr element
    int max = INT_MIN;
    for(int  i = 0; i < 8; i++ ) {
        if(max < arr[i]) max = arr[i];   
    }

    //creating hashmpa after precompute
    int hash[max+1] = {0}; //as 0 based indexing

    for (int i = 0; i <n; i++) {
        hash[arr[i]]++; //incremanting the index arr[i] by 1
    }

    max++;
    while(max--) {
        cout<< max<<" : "<<hash[max]<<" "<<endl;
    }


    
    return 0;
}