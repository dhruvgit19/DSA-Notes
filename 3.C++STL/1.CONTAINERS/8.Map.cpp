/********************************************************
 *                   std::map (C++)
 *
 * map stores elements as KEY → VALUE pairs.
 *
 * Header:
 *   #include <map>
 *
 * Key properties:
 * - Keys are UNIQUE
 * - Stored in SORTED order (by key)
 * - Implemented using Red-Black Tree
 * - All operations take O(log n)
********************************************************/



#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> m;
    m["tv"] = 100;
    m["laptop"] = 100;
    m["watch"] = 50;
    m["tablets"] = 120;

    m.insert({"camera", 25});
    m.emplace("pen", 10);


    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }

    cout << "count = " << m.count("laptop") << endl;


    if(m.find("camera") != m.end()) {
        cout << "found \n";
    } else{
        cout << "not found \n";
    }
}




// TRAVERSING A MAP : 
// /************* Using range-based loop *************/
// for(auto it : mp) {
//     cout << it.first << " " << it.second << endl;
// }

// /************* Using iterator *************/
// for(auto it = mp.begin(); it != mp.end(); it++) {
//     cout << it->first << " " << it->second << endl;
// }




