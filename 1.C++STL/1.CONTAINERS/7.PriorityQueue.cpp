/********************************************************
 *              std::priority_queue (C++)
 *
 * priority_queue is a HEAP data structure.
 *
 * Header:
 *   #include <queue>
 *
 * Key properties:
 * - Element with HIGHEST priority stays at TOP
 * - By default: MAX HEAP
 * - Insertion and deletion in O(log n)
 ********************************************************/



#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> q;
    q.push(5);
    q.push(3);
    q.push(10);
    q.push(4);

    while(!q.empty()){
        cout << q.top() << endl;
        q.pop();
    }
    cout<<endl;

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(3);
    pq.push(10);
    pq.push(4);

    while(!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }
}





/*******************************************************
 * push(x) -> insert element
 * pop()   -> remove top element
 * top()   -> access top element
 *******************************************************/




/*******************************************************
 * Syntax for MIN HEAP

 priority_queue<int, vector<int>, greater<int>> pq;
*******************************************************/




/*******************************************************
PRIORITY QUEUE FOR PAIRS:
priority_queue<pair<int,int>> pq;

pq.push({10, 1});
pq.push({20, 2});
pq.push({15, 3});

cout << pq.top().first;  // 20
*******************************************************/




/*******************************************************
MIN HEAP OF PAIRS:
priority_queue<
    pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>
> pq;
*******************************************************/