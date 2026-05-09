/********************************************************
 *                    QUICK SORT
 ********************************************************

 Quick Sort:
 A divide-and-conquer sorting algorithm that selects a
 pivot element and partitions the array such that:
 - elements smaller than pivot go to the left
 - elements greater than pivot go to the right

 Then recursively sorts both sides.

 --------------------------------------------------------
 WHY QUICK SORT?
 --------------------------------------------------------
 ✔ Very fast in practice
 ✔ In-place (no extra array)
 ✔ Cache-friendly
 ❌ Worst case O(N^2)

 --------------------------------------------------------
 BASIC IDEA
 --------------------------------------------------------
 1. Choose a pivot
 2. Partition array around pivot
 3. Recursively sort left and right parts

 --------------------------------------------------------
 PIVOT CHOICES
 --------------------------------------------------------
 - First element
 - Last element (commonly used)
 - Random element
 - Median of three

 --------------------------------------------------------
 PARTITION METHOD (LOMUTO PARTITION)
 --------------------------------------------------------
 Pivot = last element

 For j = low to high-1:
     if arr[j] < pivot:
         i++
         swap(arr[i], arr[j])

 Place pivot at correct position (i+1)

 --------------------------------------------------------
 C++ IMPLEMENTATION (STRIVER STYLE)
 -------------------------------------------------------- */

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int> &arr, int low, int high) {
    if(low < high) {
        int pIndex = partition(arr, low, high);
        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}

/*
 --------------------------------------------------------
 EXAMPLE DRY RUN
 --------------------------------------------------------
 arr = {4, 6, 2, 5, 7, 9, 1}

 Pivot = 1
 After partition:
 {1 | 6,2,5,7,9,4}

 Pivot index = 0

 Continue sorting right side...

 --------------------------------------------------------
 RECURSION TREE (BEST CASE)
 --------------------------------------------------------
 Depth = log N

 --------------------------------------------------------
 TIME & SPACE COMPLEXITY
 --------------------------------------------------------
 Time Complexity:
 - Best Case:    O(N log N)
 - Average Case: O(N log N)
 - Worst Case:   O(N^2)

 Space Complexity:
 - O(log N) (recursion stack)

 --------------------------------------------------------
 IMPORTANT PROPERTIES
 --------------------------------------------------------
 ✔ In-place
 ❌ Not stable
 ✔ Faster than merge sort in practice

 --------------------------------------------------------
 WORST CASE SCENARIO
 --------------------------------------------------------
 - Already sorted array
 - Reverse sorted array
 - Poor pivot choice

 --------------------------------------------------------
 HOW TO AVOID WORST CASE?
 --------------------------------------------------------
 ✔ Randomized pivot
 ✔ Median-of-three
 ✔ Shuffle array before sorting

 --------------------------------------------------------
 INTERVIEW QUESTIONS
 --------------------------------------------------------
 Q: Why Quick Sort is faster than Merge Sort?
 A: Better cache locality and in-place operations

 Q: Is Quick Sort stable?
 A: No

********************************************************/