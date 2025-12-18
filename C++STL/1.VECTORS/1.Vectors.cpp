/*******************************************************
 *                    VECTOR IN C++
 *
 * Vector is a dynamic array provided by STL.
 * It can grow and shrink in size automatically.
 *
 * Header file:
 *   #include <vector>
 *
 * Key properties:
 * - Contiguous memory allocation
 * - Random access in O(1)
 * - Dynamic resizing
 *******************************************************/


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    vec.pop_back();
    for(int i=0; i<=vec.size();i++){
        cout << vec[i] << " ";
    } cout << endl;

    cout<<vec[0]<<endl;
    cout<<vec.at(1)<<endl;

    cout << "front : " << vec.front() << endl;
    cout << "back : " << vec.back() << endl;
}



/*******************************************************
 * size()     -> number of elements currently stored
 * capacity() -> total memory allocated
 *******************************************************/

// vector<int> v;

// v.push_back(10);
// v.push_back(20);

// cout << v.size() << endl;      // 2
// cout << v.capacity() << endl;  // >= 2 (usually 2 or 4)




/*******************************************************
 * push_back(x) -> adds element at the end
 * pop_back()   -> removes last element
 *******************************************************/

// vector<int> v;

// v.push_back(5);
// v.push_back(10);
// v.push_back(15);   // v = {5, 10, 15}

// v.pop_back();      // v = {5, 10}



/*******************************************************
 * emplace_back() constructs the element in-place
 * Faster than push_back for complex objects
 *******************************************************/

// vector<pair<int,int>> v;

// v.push_back({1, 2});     // creates temp object
// v.emplace_back(3, 4);    // directly constructs pair





// vector<int> v = {10, 20, 30};

// /************* Using [] *************/
// cout << v[0] << endl;   // 10

// // v[5] -> Undefined behavior (NO ERROR)

// /************* Using at() *************/
// cout << v.at(1) << endl;  // 20

// // v.at(5) -> Throws out_of_range exception





/*******************************************************
 * front() -> first element
 * back()  -> last element
 *******************************************************/

// vector<int> v = {5, 10, 15};

// cout << v.front() << endl; // 5
// cout << v.back() << endl;  // 15
