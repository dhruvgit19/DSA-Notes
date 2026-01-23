/********************************************************
 *                     HASHING (STRIVER)
 ********************************************************
 HASHING:
 Technique to store and retrieve data in O(1) average time
 using a hash function.

 Used for:
 - Frequency counting
 - Fast lookup
 - Reducing brute force

 --------------------------------------------------------
 1. NUMBER HASHING (No. Of Repetitions)
 --------------------------------------------------------

 Problem:
 Count frequency of integers in an array.

 Approach:
 - Create an array or map
 - Use value as index
 - Increment count

 -------------------------------------------------------- */

#include <bits/stdc++.h>
using namespace std;

void numberHashing() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Hash array (size depends on constraints)
    int hash[1000001] = {0};

    for(int i = 0; i < n; i++)
        hash[arr[i]]++;

    int q;
    cin >> q;
    while(q--) {
        int num;
        cin >> num;
        cout << hash[num] << endl;
    }
}

/*
 Time Complexity:
 - Preprocessing: O(N)
 - Query: O(1)

 Limitation:
 - Only works when numbers are small & bounded


----------------------------------------------------------
/* 2. CHARACTER HASHING
----------------------------------------------------------

 Problem:
 Count frequency of characters in a string.

 ASCII characters:
 a-z → 26
 A-Z → 26
 All characters → 256

 ----------------------------------------------------------*/

void characterHashing() {
    string s;
    cin >> s;

    int hash[26] = {0};

    for(char c : s)
        hash[c - 'a']++;

    int q;
    cin >> q;
    while(q--) {
        char ch;
        cin >> ch;
        cout << hash[ch - 'a'] << endl;
    }
}

/*
 For all ASCII characters:
 int hash[256] = {0};
 hash[s[i]]++;


----------------------------------------------------------
/* 3. MAP (Ordered Map)
----------------------------------------------------------

 map:
 - Stores key-value pairs
 - Keys are UNIQUE
 - Stored in sorted order
 - Implemented using Red-Black Tree

 Syntax:
 map<key, value>

 ----------------------------------------------------------*/

void mapExample() {
    map<int, int> mp;

    mp[1] = 2;
    mp[5] = 3;
    mp[1]++;

    for(auto it : mp) {
        cout << it.first << " -> " << it.second << endl;
    }
}

/*
 Operations:
 mp[key]++         → insert / update
 mp.find(key)      → search
 mp.erase(key)     → delete

 Time Complexity:
 O(log N) for insert, delete, search

----------------------------------------------------------
/* 4. UNORDERED_MAP
----------------------------------------------------------

 unordered_map:
 - Stores key-value pairs
 - Keys are UNIQUE
 - No ordering
 - Implemented using Hash Table

 Syntax:
 unordered_map<key, value>

 ----------------------------------------------------------*/

void unorderedMapExample() {
    unordered_map<int, int> ump;

    ump[1] = 10;
    ump[2] = 20;
    ump[1]++;

    for(auto it : ump) {
        cout << it.first << " -> " << it.second << endl;
    }
}

/*
 Average Time Complexity:
 O(1) for insert, search, delete

 Worst Case:
 O(N)  (hash collision)

 Faster than map in most cases


----------------------------------------------------------
/* MAP vs UNORDERED_MAP
----------------------------------------------------------

 map:
 - Ordered
 - Slower (O(log N))
 - Uses less memory
 - No collision issues

 unordered_map:
 - Unordered
 - Faster (O(1) avg)
 - More memory
 - Possible collisions

 ----------------------------------------------------------
 WHEN TO USE WHAT?
 ----------------------------------------------------------

 ✔ Use array hashing → small constraints
 ✔ Use map → need sorted keys
 ✔ Use unordered_map → fastest lookup

*********************************************************/
