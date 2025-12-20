/********************************************************
 *        STL min_element() & max_element() (C++)
 *
 * Header:
 *   #include <algorithm>
 *
 * min_element → returns iterator to smallest element
 * max_element → returns iterator to largest element
 *
 * Time Complexity:
 * - O(n)
 ********************************************************/


#include<iostream>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};

    cout << *(max_element(vec.begin(), vec.end())) << endl;

    cout << *(min_element(vec.begin(), vec.end())) << endl;
}