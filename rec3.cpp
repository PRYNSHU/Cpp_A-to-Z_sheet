#include <bits/stdc++.h>
using namespace std;

    void solve(int oc , int cc , vector<string> &ans , string s, int n){

        if(oc == n && cc == n){
            ans.push_back(s);
            return;
        }

        //add open bracket
        if(oc < n){
            s += '(';
            solve(oc +1 , cc , ans , s, n);
        }
        
        //closing bracket
        if(oc > cc){
            s += ')';
            solve(oc , cc +1, ans , s , n);
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(0 , 0 , ans , "" , n);
        return ans;
    }

int main(){
    int n =3;
    vector<string> a = generateParenthesis(n);
    
    for(auto i : a){
        cout << i << " ";
    }
}