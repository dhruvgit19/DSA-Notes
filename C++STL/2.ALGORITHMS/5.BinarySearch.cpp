/********************************************************
 *              STL binary_search() (C++)
 *
 * Header:
 *   #include <algorithm>
 *
 * binary_search() checks if an element exists
 * in a SORTED range.
 *
 * Returns:
 * - true  → element exists
 * - false → element does not exist
 *
 * Time Complexity:
 * - O(log n)
 ********************************************************/



#include<iostream>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};
    
    cout << binary_search(vec.begin(), vec.end(), 1) << endl;

    cout << binary_search(vec.begin(), vec.end(), 5) << endl;

    cout << binary_search(vec.begin(), vec.end(), 10) << endl;
}