#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n){
    for(int i=n-1; i>=0; i--){
        int didSwap = 0; // If no swaps occur in a pass, array is already sorted.
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if(didSwap==0){
            break;
        }
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
    bubble_sort(arr,n);
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
}




/********************************************************
 *                   BUBBLE SORT
 ********************************************************

 Bubble Sort:
 A simple comparison-based sorting algorithm where
 adjacent elements are repeatedly compared and swapped
 if they are in the wrong order.

 The largest element "bubbles up" to the end of the array
 in each pass.

 --------------------------------------------------------
 HOW IT WORKS
 --------------------------------------------------------
 - Compare adjacent elements
 - Swap if left element > right element
 - After each pass, the largest element is placed at
   the correct position at the end
   
/*
 --------------------------------------------------------
 EXAMPLE DRY RUN
 --------------------------------------------------------
 arr = {5, 3, 4, 1, 2}

 Pass 1:
 5↔3 → {3,5,4,1,2}
 5↔4 → {3,4,5,1,2}
 5↔1 → {3,4,1,5,2}
 5↔2 → {3,4,1,2,5}

 Pass 2:
 {3,4,1,2,5}
 4↔1 → {3,1,4,2,5}
 4↔2 → {3,1,2,4,5}

 --------------------------------------------------------
 TIME & SPACE COMPLEXITY
 --------------------------------------------------------
 Time Complexity:
 - Best Case:    O(N)   (optimized version)
 - Average Case: O(N²)
 - Worst Case:   O(N²)

 Space Complexity:
 - O(1) (in-place)

 --------------------------------------------------------
 IMPORTANT PROPERTIES
 --------------------------------------------------------
 ✔ In-place
 ✔ Stable
 ✔ Simple to implement
 ❌ Very slow for large arrays

 --------------------------------------------------------
 WHEN TO USE
 --------------------------------------------------------
 - Learning sorting basics
 - Very small datasets
 - Nearly sorted arrays (optimized)

 --------------------------------------------------------
 INTERVIEW NOTES
 --------------------------------------------------------
 - Optimized version can stop early
 - Stable sort
 - Worst-case always O(N²)

********************************************************/
