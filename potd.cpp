#include "bits/stdc++.h"
using namespace std;



int main(){

    //all factors
    int n =216;
    for(int i =2;i<= sqrt(n);i++){
        if(n%i == 0)
            cout << i << " " << n/i << endl;
    }

}