// #include<iostream>
// using namespace std;
// int main(){
//     vector<int> vec = {3,5,1,8,2};
//     vector<pair<int,int>> vec2 = {{3,1}, {2,1}, {7,1}, {5,2}};

//     sort(vec.begin(), vec.end());
//     for(int val : vec){
//         cout << val << " ";
//     } 
//     cout << endl;

//     sort(vec.begin(), vec.end(), greater<int>()); // For sorting in descending order
//     for(int val : vec){
//         cout << val << " ";
//     } 
//     cout << endl;

//     sort(vec2.begin(), vec2.end());  // The pairs are sorted on the basis of first parameter.
//     for(auto p : vec2){
//         cout << p.first << " " << p.second << endl;
//     }
// }





//          CUSTOM COMPARATOR : 
// if we have to sort our pairs on the basis of 2nd parameter and if the 2nd parameter is same, the comparison must be on the basis of 1st parameter: 

#include<iostream>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    else return false;
}

int main(){
    vector<pair<int,int>> vec2 = {{3,1}, {8,1}, {5,3}, {7,2}};

    sort(vec2.begin(), vec2.end(), comparator);

    for(auto p : vec2) {
        cout << p.first << " " << p.second << endl;
    }
}