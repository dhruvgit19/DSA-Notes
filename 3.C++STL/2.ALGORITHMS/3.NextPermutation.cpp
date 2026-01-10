/********************************************************
 *          STL next_permutation() (C++)
 *
 * Header:
 *   #include <algorithm>
 *
 * next_permutation rearranges the range into the
 * NEXT lexicographically greater permutation.
 *
 * Returns:
 * - true  → next permutation exists
 * - false → already at last permutation
 *
 * Time Complexity:
 * - O(n)
 ********************************************************/


#include<iostream>
using namespace std;
int main(){
    string s = "abc";
    next_permutation(s.begin(), s.end());
    cout << s << endl;

    string t = "bca";
    prev_permutation(t.begin(), t.end());
    cout << t << endl;
}