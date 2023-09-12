//TODO: finding happy numbers using Floyds cucle finding algorithms
#include "bits/stdc++.h"
using namespace std;

// Input: n = 19
// Output: true
// Explanation:
// 12 + 92 = 82
// 82 + 22 = 68
// 62 + 82 = 100
// 12 + 02 + 02 = 1

//logic to calulate the next no.
int nextNum(int n) {
    int newNumber=0;

    while(n!=0) {
        int num = n%10;
        newNumber+= num*num;
        n/=10;
    }

    return newNumber;
}

//slow pointer is taking 1 setp and fast 2 at a time and checking whether it can arrive at slow porinter or not. If yes it means repetation.
int main() {
    int n = 34;
    int slowP = n;
    int fastP = nextNum(n);

    while(fastP!=1 && fastP!=slowP) {
        slowP = nextNum(slowP);
        fastP = nextNum(nextNum(fastP));
        
    }
    cout<<fastP<<" ";
    
    return 0;
}
