// MULTIMAP     AND      UNORDERED MAP:


/********************************************************
 *                 std::multimap (C++)
 *
 * multimap stores KEY → VALUE pairs
 *
 * Key properties:
 * - DUPLICATE keys are ALLOWED
 * - Elements are stored in SORTED order (by key)
 * - [] operator is NOT allowed
 ********************************************************/


// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     multimap<string,int> m;
    
//     m.emplace("tv", 100);
//     m.emplace("tv", 100);
//     m.emplace("tv", 100);

//     m.erase(m.find("tv"));

//     for(auto p : m){
//         cout << p.first << " " << p.second << endl;
//     }

// }





/********************************************************
 *               std::unordered_map (C++)
 *
 * unordered_map stores KEY → VALUE pairs
 *
 * Key properties:
 * - Keys are UNIQUE
 * - NOT sorted (random order)
 * - Implemented using Hash Table
 * - Average time: O(1)
 * - Worst case: O(n) (rare)
 *
 * Header:
 *   #include <unordered_map>
 ********************************************************/


#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> um;
    um.emplace("tv", 100);
    um.emplace("laptop", 100);
    um.emplace("watch", 100);
    um.emplace("pen", 100);
    for(auto p : um){
        cout << p.first << " " << p.second << endl;
    }
}