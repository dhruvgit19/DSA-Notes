#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0; i<=n-2; i++){
        int mini = i;
        for(int j=i; j<=n-1; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    selection_sort(arr,n);
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
}






/********************************************************
 *                  SELECTION SORT
 ********************************************************

 Selection Sort:
 A simple comparison-based sorting algorithm that
 repeatedly selects the minimum element from the
 unsorted part and places it at the correct position.

 --------------------------------------------------------
 HOW IT WORKS
 --------------------------------------------------------
 - Divide the array into:
   1. Sorted part (left)
   2. Unsorted part (right)
 - Repeatedly find the smallest element in the
   unsorted part and swap it with the first unsorted
   element.

 --------------------------------------------------------
/*
 --------------------------------------------------------
 EXAMPLE DRY RUN
 --------------------------------------------------------
 arr = {5, 3, 4, 1, 2}

 Pass 1 → min = 1 → swap with 5
 {1, 3, 4, 5, 2}

 Pass 2 → min = 2 → swap with 3
 {1, 2, 4, 5, 3}

 Pass 3 → min = 3 → swap with 4
 {1, 2, 3, 5, 4}

 Pass 4 → min = 4 → swap with 5
 {1, 2, 3, 4, 5}

 --------------------------------------------------------
 TIME & SPACE COMPLEXITY
 --------------------------------------------------------
 Time Complexity:
 - Best Case:    O(N^2)
 - Average Case: O(N^2)
 - Worst Case:   O(N^2)

 Space Complexity:
 - O(1) (in-place sorting)

 --------------------------------------------------------
 IMPORTANT PROPERTIES
 --------------------------------------------------------
 ✔ In-place algorithm
 ✔ Not stable (by default)
 ✔ Simple to understand
 ❌ Inefficient for large arrays

 --------------------------------------------------------
 WHEN TO USE
 --------------------------------------------------------
 - Educational purposes
 - Very small input size
 - When memory usage must be minimal

 --------------------------------------------------------
 INTERVIEW NOTES
 --------------------------------------------------------
 - Always performs N² comparisons
 - Number of swaps ≤ N
 - Better than Bubble Sort in swaps

********************************************************/
