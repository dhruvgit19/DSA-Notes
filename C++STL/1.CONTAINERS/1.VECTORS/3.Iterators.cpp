/********************************************************
 *               VECTOR ITERATORS IN C++
 *
 * Iterator = object that points to elements of a container
 * Works like a pointer
 
 * WE PRIMARILY USE ITERATORS TO RUN LOOPS ON VECTORS.
********************************************************/



// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> vec = {1, 2, 3, 4, 5};

//     cout << "vec.begin : " << *(vec.begin()) << endl;

//     cout << "vec.end : " << *(vec.end()) << endl;

//     cout << "vec.rbegin : " << *(vec.rbegin()) << endl;

//     cout << "vec.rend : " << *(vec.rend()) << endl;
// }



/********************************************************
 *           vector.begin() and vector.end()
 *
 * begin() -> iterator pointing to FIRST element
 * end()   -> iterator pointing to POSITION AFTER
 *            the LAST element
 *
 * IMPORTANT:
 * - end() does NOT point to the last element
 * - *end() is INVALID
 ********************************************************/



/********************************************************
 *          vector::rbegin() and vector::rend()
 *
 * rbegin() -> reverse iterator pointing to LAST element
 * rend()   -> reverse iterator pointing to position
 *            BEFORE the FIRST element
 *
 * Used for reverse traversal of vector
 ********************************************************/



 // LOOPS IN VECTORS USING ITERATORS : 

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec = {1, 2, 3, 4, 5};

    // FORWARD LOOP : 
    vector<int>::iterator it;
    for(it=vec.begin(); it!=vec.end(); it++) {
        cout << *(it) << endl;
    }
    cout<<endl;

    // REVERSE LOOP
    vector<int>::reverse_iterator itr;    // Use ''auto'' to ignore this step.
    for(itr=vec.rbegin(); itr!=vec.rend(); itr++){
        cout << *(itr) << endl;
    }
    cout<<endl;

    // using auto : 
    for(auto itr=vec.rbegin(); itr!=vec.rend(); itr++){
        cout << *(itr) << endl;
    }
}