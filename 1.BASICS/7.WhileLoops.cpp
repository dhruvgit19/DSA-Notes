/*
--------------------------------
🔹 WHILE LOOP
- Used when number of iterations is not fixed,
  and depends on a condition.
Syntax:
    while(condition){
        // code
    }

Example:
    int i=1;
    while(i<=5){
        cout << i << " ";
        i++;
    }
Output: 1 2 3 4 5

--------------------------------
📌 Key Points:
- for → best when iterations are counted
- while → best when condition is checked repeatedly
*/



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int i = 1;
//     while(i<=5){
//         cout << "Dhruv " << i << endl;
//         i++;
//     }
//     return 0;
// } 



/*
=============================
      DO-WHILE LOOP
=============================

📌 Definition:
- Similar to while loop
- But code runs at least ONCE (condition is checked later)

--------------------------------
🔹 Syntax:
    do {
        // code
    } while(condition);

--------------------------------
📌 Key Points:
- Executes body first, then checks condition
- Guaranteed at least one execution
- Useful when we want code to run once before checking
=============================
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int i = 1;
    do{
        cout<<"Dhruv"<<i<<endl;
        i++;
    } while(i<=5);
    return 0;
}
