/********************************************************
 *               STL reverse() (C++)
 *
 * Header:
 *   #include <algorithm>
 *
 * reverse() reverses elements in a given range
 *
 * Time Complexity:
 * - O(n)
 ********************************************************/



 
#include<iostream>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};

    reverse(vec.begin(), vec.end());

    for(auto val : vec) {
        cout << val << " " << endl;
    }
}