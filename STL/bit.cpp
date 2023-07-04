#include "bits/stdc++.h"
using namespace std;

void tobinary(){
    int n =8;
    //n to binary
    int ans =0, rem;
    int i =1;

    while(n>0){
        rem = n&1;
        ans = rem * i + ans;
        i = i*10;
        //both r same
        // n = n>>1;
        n = n/2;
    }

    cout << ans;
}
int main(){
    
tobinary();

int n =44;
n = n >> 3;
cout << n << endl;

n = n << 3;
cout << n << endl;




}