//                          OPTIMAL SOLUTION :
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "No. of elements : ";
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int i=0;
    for(int j=1; j<n; j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout << "Number of unique elements : " << i+1;
}




/*
====================================================
TOPIC: Remove Duplicates from an Array
====================================================

PROBLEM STATEMENT:
------------------
Given an array, remove duplicate elements and return
the number of unique elements.

IMPORTANT:
- Order of elements should be preserved.
- Very commonly asked for a SORTED array.
- Two versions exist:
  1) Unsorted Array
  2) Sorted Array (most important)

----------------------------------------------------
CASE 1: UNSORTED ARRAY
----------------------------------------------------
Brute force using extra space (set / map)

----------------------------------------------------
APPROACH 1: Brute Force (Using Set)
----------------------------------------------------
Idea:
- Insert all elements into a set
- Copy ba
ck to array

Time Complexity: O(n log n)
Space Complexity: O(n)


----------------------------------------------------
APPROACH 3: Optimal (Two Pointer Method)
----------------------------------------------------
BEST & INTERVIEW-FRIENDLY SOLUTION

Idea:
- Use two pointers i and j
- i tracks position of last unique element
- j scans the array

Steps:
1. Initialize i = 0
2. Traverse j from 1 to n-1
3. If arr[j] != arr[i]:
     i++
     arr[i] = arr[j]
4. Unique elements count = i + 1

Time Complexity: O(n)
Space Complexity: O(1)
*/