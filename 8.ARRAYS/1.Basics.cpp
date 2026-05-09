/********************************************************
 *                       ARRAYS
 ********************************************************

 Array:
 A data structure that stores elements of the same data
 type in contiguous memory locations.

 Indexing:
 - 0-based indexing in C++
 - Access time: O(1)

 --------------------------------------------------------
 DECLARATION & INITIALIZATION
 -------------------------------------------------------- */

#include <bits/stdc++.h>
using namespace std;

void arrayBasics() {
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[] = {10, 20, 30};

    // Access elements
    cout << arr[0] << endl;   // first element
    cout << arr[4] << endl;   // last element
}

/*
 --------------------------------------------------------
 MEMORY REPRESENTATION
 --------------------------------------------------------
 - Stored in contiguous memory
 - Address of arr[i] = base + i * size
 --------------------------------------------------------*/

/* TYPES OF ARRAYS
----------------------------------------------------------
1. Static Array
   - Fixed size
   - Allocated at compile time

2. Dynamic Array
   - Size decided at runtime
   - Use vector in C++
----------------------------------------------------------*/

/* ITERATING OVER ARRAY
----------------------------------------------------------*/

void traverseArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

/* INPUT & OUTPUT
----------------------------------------------------------*/

void inputOutputArray() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

/* PASSING ARRAY TO FUNCTION
----------------------------------------------------------*/

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

/* COMMON ARRAY OPERATIONS
----------------------------------------------------------

1. Access        → O(1)
2. Traversal     → O(N)
3. Search:
   - Linear      → O(N)
   - Binary      → O(log N) (sorted array)
4. Insert/Delete → O(N)

----------------------------------------------------------*/

/* LINEAR SEARCH
----------------------------------------------------------*/

int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

/* BINARY SEARCH (SORTED ARRAY)
----------------------------------------------------------*/

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}


/* REVERSING AN ARRAY
----------------------------------------------------------*/

void reverseArray(int arr[], int n) {
    int l = 0, r = n - 1;
    while(l < r) {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}

/* MAXIMUM & MINIMUM ELEMENT
----------------------------------------------------------*/

int getMax(int arr[], int n) {
    int mx = arr[0];
    for(int i = 1; i < n; i++)
        mx = max(mx, arr[i]);
    return mx;
}

int getMin(int arr[], int n) {
    int mn = arr[0];
    for(int i = 1; i < n; i++)
        mn = min(mn, arr[i]);
    return mn;
}

/* ADVANTAGES
----------------------------------------------------------
✔ Fast access
✔ Simple structure
✔ Cache-friendly
----------------------------------------------------------

----------------------------------------------------------
/* DISADVANTAGES
----------------------------------------------------------
❌ Fixed size (static arrays)
❌ Costly insertion & deletion
❌ Wasted memory or overflow
----------------------------------------------------------

----------------------------------------------------------
/* COMMON MISTAKES
----------------------------------------------------------
❌ Out-of-bounds access
❌ Assuming dynamic size
❌ Forgetting array size
----------------------------------------------------------

----------------------------------------------------------
/* INTERVIEW NOTES
----------------------------------------------------------
- Arrays are stored contiguously
- Indexing starts from 0 in C++
- Vector is preferred over raw arrays
----------------------------------------------------------*/

