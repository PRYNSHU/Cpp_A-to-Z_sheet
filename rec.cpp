#include <bits/stdc++.h>
using namespace std;

void count(int n){
    //base cond
    if(n==0)
        return; //void fun

    //processing (optional component)
    cout << n << endl;

    //recurcive relation
    //(as rec. rel. is below from processing ,it is called TAIL recursion)
    count(n-1);
    cout << n << endl;
    //rec rel always returns to main whether it is void or not 
}


int fact(int n){
    //base condition (where to stop)
    if(n==0)
        return 1; // In base condition return is mandatory

    //recursive relation
    int ans = n * fact(n-1);
    cout << n << "-" << ans << endl;
    return ans;
}

int power(int n){
    //base cond
    if(n==0)
        return 1;

    //recursive relation
    return 2 * power(n-1);
}

int sumarr(int arr[], int n){
    //base condition
    if(n==1){
        return arr[0];
    }
    cout << arr[0] << " " << n << endl;

    //recursive relation
    int sum = arr[0] + sumarr(arr +1, n-1);
    return sum;
}

int main(){
    
    int n = 5;
    // int ans = fact(n);
    // cout << ans << endl;
    // count(n);
    
    // int ans2 = power(n);
    // cout << ans2 << endl;

    int arr[10] = {1,2,3,4,5};

    cout << "sum is " << endl;
    int ans = sumarr(arr , n);
    cout << ans << endl;
}