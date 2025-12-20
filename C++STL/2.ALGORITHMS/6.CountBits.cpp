/********************************************************
 *           COUNT SET BITS (C++)
 *
 * Set bit = bit with value 1
 *
 * Example:
 *  n = 13 → 1101 → set bits = 3
 ********************************************************/



#include<iostream>
using namespace std;
int main(){
    int n = 15;
    long int m = 15;
    long long int p = 15;

    cout << __builtin_popcount(n) << endl;
    cout << __builtin_popcountl(m) << endl;
    cout << __builtin_popcountll(p) << endl;

}




/********************************************************
 *               __builtin_popcount(n) (C++)
 *
 * Purpose:
 * - Counts number of set bits (1s) in an integer
 *
 * Header:
 * - No extra header needed (part of GCC/Clang)
 *
 * Syntax:
 *   int cnt = __builtin_popcount(n);       // for int
 *   int cnt = __builtin_popcountl(n);      // for long
 *   int cnt = __builtin_popcountll(n);     // for long long
 *
 * Time Complexity:
 * - O(number of bits in n) → very fast
 ********************************************************/