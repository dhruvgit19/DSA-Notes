/********************************************************
 *           PRINT ALL DIVISORS OF A NUMBER (C++)
 *
 * Definition:
 * - Divisor of n → integer d such that n % d == 0
 *
 * Examples:
 *  n = 12 → divisors: 1, 2, 3, 4, 6, 12
 *  n = 15 → divisors: 1, 3, 5, 15
 ********************************************************/




// Naive Approach (O(n)) : 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter n : ";
//     cin >> n;
    
//     for(int i=1; i<=n; i++){
//         if(n%i == 0){
//             cout << i << " ";
//         }
//     }
// }




// Optimized Approach (O(√n)) :
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter n : ";
    cin >> n;
    
    for(int i=1; i<= sqrt(n); i++){
        if(n%i == 0){
            cout << i << " ";
            if((n/i) != i) cout << (n/i) << " ";
        }
    }
}