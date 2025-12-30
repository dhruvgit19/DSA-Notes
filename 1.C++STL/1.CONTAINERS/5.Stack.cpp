/********************************************************
 *                   std::stack (C++)
 *
 * stack follows LIFO (Last In First Out)
 *
 * Header:
 *   #include <stack>
 *
 * Key properties:
 * - Insertion & deletion only at TOP
 * - No random access
 * - Built on top of deque (by default)
********************************************************/


#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);


    stack<int> s2;
    s2.swap(s);


    cout << "s size : " << s.size() << endl;
    cout << "s2 size : " << s2.size() << endl;

    
    while(!s2.empty()){
        cout << s2.top() << endl;
        s2.pop();
    }
}



/*******************************************************
 * push(x) -> insert element at top
 * pop()   -> remove top element
 * top()   -> access top element
 * st.size();     // number of elements
 * st.empty();    // true if stack is empty
 * s.swap();      // swaps stacks
*******************************************************/


/*******************************************************
 Traversing Stack : 
 * stack does NOT support traversal
 * You must pop elements to access them
 *******************************************************/
