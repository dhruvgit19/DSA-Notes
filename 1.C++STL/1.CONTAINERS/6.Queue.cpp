/********************************************************
 *                   std::queue (C++)
 *
 * queue follows FIFO (First In First Out)
 *
 * Header:
 *   #include <queue>
 *
 * Key properties:
 * - Insertion at BACK
 * - Deletion from FRONT
 * - No random access
 * - Built on top of deque (by default)
********************************************************/



#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
}



/*******************************************************
 * push(x)   -> insert element at BACK
 * pop()     -> remove element from FRONT
 * front()   -> access FRONT element
 * back()    -> access LAST element

queue<int> q;

q.push(10);
q.push(20);
q.push(30);   // queue: 10 20 30

cout << q.front() << endl; // 10
cout << q.back() << endl;  // 30

q.pop();                  // removes 10
cout << q.front() << endl; // 20
*******************************************************/

