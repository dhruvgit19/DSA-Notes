/********************************************************
 *
 * pair is a container that stores TWO values together.
 *
 * Key properties:
 * - Stores exactly 2 values
 * - Values can be of SAME or DIFFERENT data types
 * - Accessed using .first and .second
 ********************************************************/

#include<iostream>
using namespace std;
int main(){
    pair<int, int> p={1,5};
    cout << p.first << endl;
    cout << p.second << endl;


    pair<int, pair<char, int>> q = {1, {'a', 3}};
    cout << q.first << endl;
    cout << q.second.first << endl;
    cout << q.second.second << endl;


    vector<pair<int, int>> vec = {{1,2}, {2,3}};
    vec.push_back({3,4});
    vec.emplace_back(4,5); //creates in-place objects automatically
    for(auto p:vec){
        cout << p.first << " " << p.second << endl;
    }
}




/*******************************************************
 * pair inside pair
 ******************************************************

pair<int, pair<int,int>> p = {1, {2, 3}};

cout << p.first << endl;          // 1
cout << p.second.first << endl;   // 2
cout << p.second.second << endl;  // 3

*/



/********************************************************
Vector of Pairs
vector<pair<int,int>> vp;

vp.push_back({1, 2});
vp.emplace_back(3, 4);

for(auto p : vp) {
    cout << p.first << " " << p.second << endl;
}
********************************************************/



/********************************************************
SWAP() WITH PAIR : 
pair<int,int> p1 = {1, 2};
pair<int,int> p2 = {3, 4};

swap(p1, p2);
********************************************************/