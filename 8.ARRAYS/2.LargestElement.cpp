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
    
    int largest = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout << "Largest element : " << largest;
}



/*
====================================================
TOPIC: Largest Element in an Array
====================================================

DEFINITION:
-------------
The largest element in an array is the element having
the maximum value among all elements present in the array.

----------------------------------------------------
APPROACH 1: Brute Force (Sorting)
----------------------------------------------------
Idea:
- Sort the array
- The last element will be the largest

Steps:
1. Sort the array in ascending order
2. Return arr[n-1]

Time Complexity: O(n log n)
Space Complexity: O(1) or O(n) (depends on sorting method)

Drawback:
- Unnecessary sorting when we only need the maximum value

----------------------------------------------------
APPROACH 2: Optimal (Linear Scan)
----------------------------------------------------
Idea:
- Traverse the array once
- Keep track of the maximum element

Steps:
1. Assume first element as largest
2. Compare it with every other element
3. Update largest if a bigger element is found

Time Complexity: O(n)
Space Complexity: O(1)

This is the BEST approach.

*/