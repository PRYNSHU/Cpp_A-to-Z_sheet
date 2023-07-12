#include <bits/stdc++.h>
using namespace std;

void pairs(){
    //part of utility library
    pair<int , int> p = {3,4};
    cout << p.first << " " <<p.second << endl;

    pair<int , pair<int , int>> p2 = {1, {2,3}};

    pair<int, int> arr[] = {{1,2} , {3,4}};
    cout << arr[0].second << endl;
}

void iterators(){

    vector<int> v = {10, 20, 30, 50, 80};
    cout << v[0] << endl;

    vector<int>::iterator it = v.begin(); //v.begin is pointing to memory add.
    it++;
    cout << *(it) << endl;

    vector<int>::iterator its = v.end();
    its--; //because v.end points to outside the vector


    //printing 
    for(auto it = v.begin() ; it !=v.end() ;it++){

        cout << *(it) << " ";
    }
    cout << endl;
    cout << *(its) << endl;

}

void priorityque(){

    priority_queue<int> pq ; //arrange in order of max ele at top and sorted
    pq.push(5);
    pq.push(1);
    pq.push(9);
    pq.push(3);

    cout << pq.top() << endl;

}

void vectors(){

    //dynamic array 
    // int v2[1000] = {0}; //initializing all element with zero

    vector<int> v = {10, 20, 30, 50, 80};
        v.push_back(90);
        cout << v.back() << endl; //return last ele
        // v.clear(); //clear all ele
        
        //take address as an input , insert between the ele
        v.insert(v.begin() +1 , 11);
        cout << v[0] << " & at 1 index " << v[1] << endl;

        v.erase(v.begin() , v.end()); //from and to
        cout << v.empty() << endl; //check empty or not
}

void sets(){

    //store in sorted and unique way
    set<int> st = {2,2,5,1,6,6,8};
    st.insert(3);
    auto it = st.find(2);
    cout << *(it) << endl;
    // cout << st.find(2) << " " << st[0] << endl;
    cout << st.size() << endl;
    st.erase(2);
        cout << st.size() << endl;

    cout << st.count(5)  << " " << st.count(9) << endl;

}

void multisets(){

    //stored in sorted ,but not unique
    multiset<int> ms;

    ms.insert(3);
    ms.insert(3);
    ms.insert(1);
    ms.insert(5);
    ms.insert(2);
    ms.insert(3);

    ms.find(2);
    cout << "size " << ms.size() << endl;
    // ms.erase(3); //erase all 3
    ms.erase(ms.find(3)); //erase only 3
    cout << "size " << ms.size() << endl;

}

void unorderedsets(){

    //stored in unique and in random order
    // T.C = O(1)
    unordered_set<int> us;
    
    us.insert(8);us.insert(2);
    us.insert(3);
    us.insert(5);
    cout << *(us.begin()) << endl;
    
    //all fn works

}

void maps(){

    //stored in key and value pairs
    map<int ,int> mp;
    mp[1] = 9;
    mp.insert({4,5});        
    mp.insert({3,8});
    mp.insert({2,3});
    mp.insert({5,8});

    for(auto i : mp){
        cout << i.first << "->" << i.second << endl;
    }
    cout << mp[1] << endl;

    // The function returns an iterator or a constant iterator 
    // which refers to the position where the key is present in the map.
    // If the key is not present in the map container, 
    // it returns an iterator or a constant iterator which refers to map.end(). 

    if(mp.find(3) != mp.end())
        cout << "key 3 is present" << endl;
    else
        cout << "not present" << endl;
        
    if(mp.find(8) == mp.end())
        cout << "key 8 is not present , iterator return end()";

}

void unorderedmaps(){
    //store in random and key are always unique
    //T.C = O(1)
    unordered_map<int , int> mpp;

}

int main(){

    // //about pairs
    // pairs();
    // iterators();

    // vectors();
    // sets();
    // multisets();
    // unorderedsets();

    maps();

    // priorityque();

}