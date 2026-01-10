/*
=============================
        FUNCTIONS IN C++
=============================

📌 Definition:
- A function is a block of code that performs a specific task.
- It can be reused (write once, use many times).
- Helps in modular & clean code.

--------------------------------
🔹 Syntax:
    returnType functionName(parameters){
        // code
        return value;
    }

--------------------------------
📌 Based on Arguments & Return:
1. No arguments, No return
    void greet(){
        cout << "Hello!";
    }

2. With arguments, No return
    void greet(string name){
        cout << "Hello " << name;
    }


3. No arguments, With return
    int getNum(){
        return 10;
    }

4. With arguments, With return
    int square(int n){
        return n*n;
    }

--------------------------------
📌 Key Points:
- Functions must be declared before use (or use prototypes).
- returnType can be void (no value returned).
- main() is also a function.
=============================
*/






// EXAMPLE OF WITH ARGUMENTS, NO RETURN : 

// #include<bits/stdc++.h>
// using namespace std;

// void printName(string something){
//     cout << "Hey " << something << endl;
// }

// int main(){
//     string name;
//     cin >> name;
//     printName(name);

//     string x;
//     cin >> x;
//     printName(x);
//     return 0;
// }




// // Take two numbers and print its sum : 
// #include<bits/stdc++.h>
// using namespace std;

// int Sum(int a, int b){
//     return a+b;
// }

// int main(){
//     int x;
//     cin >> x;

//     int y;
//     cin >> y;

//     int result = Sum(x,y);

//     cout << "The sum is " << result;

//     return 0;
// }



// // IN-BUILT FUNCTIONS : 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;
//     int minimum = min(num1,num2);    //MAX and MIN are in-built functions
//     cout << minimum;
//     return 0;
// }





/*
=============================
 PASS BY VALUE vs REFERENCE
=============================

📌 Definition:
- Functions can receive arguments in 2 ways:
  1. Pass by Value
  2. Pass by Reference

--------------------------------
🔹 Pass by Value
- A copy of the actual argument is passed.
- Changes inside the function DO NOT affect original variable.

--------------------------------
🔹 Pass by Reference
- Function receives the actual variable (not a copy).
- Changes inside the function DO affect original variable.

--------------------------------
📌 Key Points:
- Pass by Value → Safe, original data not modified
- Pass by Reference → Efficient (no copy made), allows modification
- Use reference (&) when function needs to change original variable
=============================
*/



// PASS BY VALUE : 
// #include<bits/stdc++.h>
// using namespace std;

// void dosomething(int num){
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

// int main() {
//     int num = 10;
//     dosomething(num);     // here we send a copy of num to the function, the original 10 is still in int main().

//     cout<<num<<endl;
//     return 0;
// }




// PASS BY REFERENCE : 
// #include<bits/stdc++.h>
// using namespace std;

// void dosomething(string &s){    //& likhne se original value function mei jaati hai!
//     s[0] = 't';
//     cout << s << endl;
// }

// int main() {
//     string s = "raj";
//     dosomething(s);

//     cout<<s<<endl;
//     return 0;
// }





// USING LOOPS TO INPUT VALUES OF ARRAY :
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    for(int i=0; i<=4; i++){
        cin >> arr[i];
    }

    for(int i=0; i<=4; i++){
        cout << arr[i] << " ";
    }
}