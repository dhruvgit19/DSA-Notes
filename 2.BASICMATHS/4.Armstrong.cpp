/********************************************************
 *               ARMSTRONG NUMBER (C++)
 *
 * Definition:
 * - A number is an Armstrong number if:
 *   sum of (each digit ^ number_of_digits) = original number
 *
 * Examples:
 *   153 = 1^3 + 5^3 + 3^3 = 153  
 *   370 = 3^3 + 7^3 + 0^3 = 370  
 *   123 = 1^3 + 2^3 + 3^3 ≠ 123  
 ********************************************************/




#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int dup = n;
    int sum = 0;

    while(n!=0){
        int ld = n%10;
        int s = ld*ld*ld;
        sum = sum + s;
        n = n/10;
    }
    if(dup == sum) cout << "True";
    else cout << "False";
}