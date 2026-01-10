/* =====================================================
   EUCLIDEAN ALGORITHM (GCD / HCF)
   =====================================================

   Definition:
   The Euclidean Algorithm is an efficient method to find
   the Greatest Common Divisor (GCD) of two integers.

   Key Idea:
   GCD(a, b) = GCD(a % b, b)
   Repeat until a%b becomes 0.

   Why it works:
   If a number divides both a and b, it also divides
   (a − k*b), hence divides (a % b).



   -----------------------------------------------------
   TIME & SPACE COMPLEXITY
   -----------------------------------------------------
   Time Complexity: O(log(min(a, b)))
   Space Complexity:
     - Iterative: O(1)
     - Recursive: O(log n) (call stack)
*/


#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "enter a : ";
    cin >> a;
    int b;
    cout << "enter b : ";
    cin >> b;

    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) cout << "GCD is : " << b;
    else cout << "GCD is : " << a;
}