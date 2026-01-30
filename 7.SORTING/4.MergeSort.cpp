/********************************************************
 *                    MERGE SORT
 ********************************************************

 Merge Sort:
 A divide-and-conquer sorting algorithm that divides
 the array into smaller subarrays, sorts them, and then
 merges them back together.

 Key Idea:
 Divide → Sort → Merge

 --------------------------------------------------------
 WHY MERGE SORT?
 --------------------------------------------------------
 ✔ Guaranteed O(N log N)
 ✔ Stable sort
 ✔ Used in real systems
 ❌ Extra space required

 --------------------------------------------------------
 ALGORITHM OVERVIEW
 --------------------------------------------------------
 1. Divide the array into two halves
 2. Recursively sort both halves
 3. Merge the two sorted halves

 --------------------------------------------------------
 PSEUDOCODE
 --------------------------------------------------------
 mergeSort(arr, l, r):
     if l >= r: return
     mid = (l + r) / 2
     mergeSort(arr, l, mid)
     mergeSort(arr, mid+1, r)
     merge(arr, l, mid, r)

 --------------------------------------------------------
 C++ IMPLEMENTATION
 -------------------------------------------------------- */

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int l, int mid, int r) {
    vector<int> temp;
    int left = l;
    int right = mid + 1;

    while(left <= mid && right <= r) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= r) {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = l; i <= r; i++) {
        arr[i] = temp[i - l];
    }
}

void mergeSort(vector<int> &arr, int l, int r) {
    if(l >= r)
        return;

    int mid = l + (r - l) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

/*
 --------------------------------------------------------
 EXAMPLE DRY RUN
 --------------------------------------------------------
 arr = {5, 3, 4, 1, 2}

 Step 1: Divide
 {5,3,4}   {1,2}

 Step 2: Further divide
 {5} {3,4} {1} {2}

 Step 3: Merge
 {3,4} {1,2}
 {3,4,5}
 {1,2}
 {1,2,3,4,5}

 --------------------------------------------------------
 RECURSION TREE
 --------------------------------------------------------
 mergeSort(0,4)
        /        \
 mergeSort(0,2)  mergeSort(3,4)
     /     \         /     \
 (0,1)   (2,2)   (3,3)   (4,4)

 --------------------------------------------------------
 TIME & SPACE COMPLEXITY
 --------------------------------------------------------
 Time Complexity:
 - Best Case:    O(N log N)
 - Average Case: O(N log N)
 - Worst Case:   O(N log N)

 Space Complexity:
 - O(N) (temporary array)
 - O(log N) (recursion stack)

 --------------------------------------------------------
 IMPORTANT PROPERTIES
 --------------------------------------------------------
 ✔ Stable sort
 ✔ Divide & Conquer
 ✔ Predictable performance
 ❌ Not in-place

 --------------------------------------------------------
 COMMON INTERVIEW QUESTIONS
 --------------------------------------------------------
 Q: Why is merge sort stable?
 A: Equal elements preserve relative order during merge

 Q: Why not in-place?
 A: Needs extra temporary array

 --------------------------------------------------------
 REAL-WORLD USE
 --------------------------------------------------------
 - Sorting linked lists
 - External sorting
 - Used in TimSort & Merge-based systems

********************************************************/
