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
int main(){
    //about pairs
    // pairs();
    // iterators();

    vector<int> v = {10, 20, 30, 50, 80};

    v.insert(v.begin() +1, 11); //take address as an input
    cout << v[1] << endl;

    v.erase(v.begin() , v.end()); //from and to
    cout << v.empty() << endl;

    // priorityque();

}