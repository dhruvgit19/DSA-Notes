/*
=============================
        STRINGS IN C++
=============================

📌 Definition:
- A string is a sequence of characters.
- In C++, we usually use the string class (from <string>).
- Easier & safer than C-style char arrays.

--------------------------------
📌 Declaration:
    string s = "Hello";

📌 Length of string:
    s.size()   OR   s.length()

📌 Access characters:
    s[0], s[1], ... s[n-1]

📌 Input:
    string s;
    cin >> s;          // single word
    getline(cin, s);   // full line

📌 Concatenation:
    string a="Hi", b="Dhruv";
    cout << a + " " + b;

--------------------------------
📌 Useful Functions:
    s.empty()         → check if string is empty
    s.at(i)           → character at index i
    s.append("abc")   → add text at end
    s.substr(pos,len) → substring
    s.find("word")    → find position
    s.compare(str)    → compare strings
    s.clear()         → erase string

--------------------------------
📌 Key Points:
- Index starts at 0
- Strings are mutable (can be changed)
- Preferred over C-style char arrays
=============================
*/



#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Striver";
    int len = s.size();        // length of string
    cout << len << '\n';
    cout << s[0];
    return 0;
}