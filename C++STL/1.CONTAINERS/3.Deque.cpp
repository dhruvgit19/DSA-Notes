/********************************************************
 *                   std::deque (C++)
 *
 * deque = Double Ended Queue
 *
 * Header:
 *   #include <deque>
 *
 * Key properties:
 * - Dynamic size
 * - Fast insertion & deletion at BOTH ends
 * - Supports random access (like vector)
 * - Not contiguous memory (unlike vector)
 ********************************************************/

#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d={1,2,3,4,5};
    for(int val : d){
        cout << val << " ";
    }
    cout << endl;
    cout << d[2]; // Supports random access
}