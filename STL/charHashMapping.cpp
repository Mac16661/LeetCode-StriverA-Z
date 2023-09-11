#include "bits/stdc++.h"
using namespace std;

#define const BASE = 97;

int main() {
    
    char arr[11] = {'a','d','a','q','d','f','q','g','e','g','v'};

    //TODO: creating char hashmap 
    int alfa = 26;
    int hash[alfa] = {0};

    for(int i = 0; i < 11; i++) {
        hash[((int)arr[i])- 97]++;
    }

    while(alfa--) {
        char alf = alfa+97;
        cout<<alf<<" "<<hash[alfa]<<endl;
    }

    return 0;

}

    
