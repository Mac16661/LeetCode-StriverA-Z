#include "bits/stdc++.h"
using namespace std;

int nextNumber(int n){
        int newNumber = 0;
        while(n!=0){
            int num = n%10;
            newNumber += num*num;
            n = n/10;
        }
        return newNumber;
    }

//Using set datastructure to store the current value and try to find the next number if but if returned value is in the set we terminate while loop(repetation)
int mian(){
    int n = 19;
    unordered_set<int> set;
    while(n!=1 && !set.count(n)){
        set.insert(n);
        n = nextNumber(n);
    }

    cout<<n<<" ";
    return 0;
}