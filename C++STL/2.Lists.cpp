/********************************************************
 *                   std::list (C++)
 *
 * list is a DOUBLY LINKED LIST provided by STL.
 *
 * Header:
 *   #include <list>
 *
 * Key properties:
 * - Non-contiguous memory
 * - No random access (no indexing)
 * - Fast insertion & deletion at ANY position
 ********************************************************/



 #include<iostream>
 #include<list>
 using namespace std;
 int main(){
    list<int>l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);

    l.pop_back();
    l.pop_front();
    for(int val : l){
        cout << val << " ";
    }

 }




 /*******************************************************
 * push_front(x) -> insert at beginning
 * push_back(x)  -> insert at end
 *******************************************************/

 

 /*******************************************************
 * pop_front() -> remove first element
 * pop_back()  -> remove last element
 *******************************************************/



 /************* Using iterator *************/
// for(auto it = l.begin(); it != l.end(); it++) {
//     cout << *it << " ";
// }

/************* Range-based loop *************/
// for(int x : l)
//     cout << x << " ";
