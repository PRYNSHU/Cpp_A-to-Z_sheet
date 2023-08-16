#include <bits/stdc++.h>
using namespace std;

void fun1(int i , vector<int> &v , int arr[] , int n ){

    if(i == n){
        //print the array
        for(int m : v)
            cout << m << " ";
        cout << endl;
        return;
    }
    
    //add i.e take fun
    v.push_back(arr[i]);
    fun1(i +1 , v , arr , n);

    //remove i.e not take fun
    v.pop_back();
    fun1(i +1 , v , arr , n);

}

int fun2(int i , vector<int> &v , int arr[], int n , int sum){

    if(i == n){
        if(sum == 2){
            //print
            // for(int i: v)
            //     cout << i << " ";
            // cout << endl;
            return 1;
        }
        return 0;
    }

    //take
    v.push_back(arr[i]);
    sum += arr[i];

    int l = fun2(i +1 , v , arr , n , sum);

    v.pop_back();
    sum -= arr[i];

    //not take
    int r = fun2(i +1 , v , arr , n , sum);

    return l+r;
}

int main(){
    int arr[] = {3,1,2};
    int n =3;

    vector<int> v;
    fun1(0 , v , arr , n);


    // int arr[] = {1,2,1};
    // int n = 3;

    // vector<int> v;
    // cout << fun2(0 , v , arr , n, 0) << endl;
}

