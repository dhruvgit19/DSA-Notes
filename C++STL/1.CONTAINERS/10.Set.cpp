/********************************************************
 *                     std::set (C++)
 *
 * set stores UNIQUE elements in SORTED order
 *
 * Key properties:
 * - Duplicate elements NOT allowed
 * - Elements are automatically SORTED
 * - Implemented using Red-Black Tree
 * - All operations take O(log n)
 *
 * Header:
 *   #include <set>
********************************************************/



#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(5);
    s.insert(4);

    s.insert(1);

    cout << s.size() << endl;

    for(auto val:s){
        cout << val << " ";
    } cout << endl;

    cout << "lower bound : " << *(s.lower_bound(4)) << endl;  //if there wasn't 4, it would return 5.

    cout << "upper bound : " << *(s.upper_bound(4)) << endl;

}




/************************************************
 * lower_bound(x) → first element >= x
 Should NOT be lesser than key

 
 * upper_bound(x) → first element > x
 Greater than key
 ************************************************/





//              TYPES OF SETS : 
/********************************************************
 *                 std::multiset (C++)
 *
 * multiset stores elements in SORTED order
 *
 * Key properties:
 * - DUPLICATE elements ARE allowed
 * - Automatically SORTED
 * - Implemented using Red-Black Tree
 * - Operations take O(log n)

********************************************************/

#include<iostream>
#include<set>
using namespace std;
int main(){
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(5);
    s.insert(4);

    s.insert(1);
    s.insert(2);

    for(auto val:s){
        cout << val << " ";
    } cout << endl;

}





/********************************************************
 *               std::unordered_set (C++)
 *
 * unordered_set stores UNIQUE elements
 *
 * Key properties:
 * - NO duplicates allowed
 * - NOT sorted (random order)
 * - Implemented using Hash Table
 * - Average time: O(1)
 *
 * Header:
 *   #include <unordered_set>
 ********************************************************/


 
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(5);
    s.insert(4);

    s.insert(1);
    s.insert(2);

    for(auto val:s){
        cout << val << " ";
    } cout << endl;
}