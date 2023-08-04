#include <bits/stdc++.h>
using namespace std;

void rec(int i , int j , int arr[]){

    if(i>=j)
        return;

    swap(arr[i] , arr[j]);
    rec(i+1 , j-1 , arr);
}


int main(){
    int n =5;
    int arr[] = {2,4,6,1,7};
   
    rec(0 , n-1 , arr);

    for(int i: arr)
        cout << i << " ";
}