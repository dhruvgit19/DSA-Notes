#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
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
    insertion_sort(arr,n);
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
}



/********************************************************
 *                 INSERTION SORT
 ********************************************************

 Insertion Sort:
 A simple comparison-based sorting algorithm that builds
 the sorted array one element at a time by inserting each
 element into its correct position.

 Inspired by how we sort playing cards in hand.

 --------------------------------------------------------
 HOW IT WORKS
 --------------------------------------------------------
 - Assume the first element is already sorted
 - Take the next element
 - Shift larger elements to the right
 - Insert the element at its correct position

/*
 --------------------------------------------------------
 EXAMPLE DRY RUN
 --------------------------------------------------------
 arr = {5, 3, 4, 1, 2}

 Step 1: key = 3
 {5,5,4,1,2} → insert 3 → {3,5,4,1,2}

 Step 2: key = 4
 {3,5,5,1,2} → insert 4 → {3,4,5,1,2}

 Step 3: key = 1
 {3,4,5,5,2} → insert 1 → {1,3,4,5,2}

 Step 4: key = 2
 {1,3,4,5,5} → insert 2 → {1,2,3,4,5}

 --------------------------------------------------------
 TIME & SPACE COMPLEXITY
 --------------------------------------------------------
 Time Complexity:
 - Best Case:    O(N)   (already sorted)
 - Average Case: O(N²)
 - Worst Case:   O(N²)  (reverse sorted)

 Space Complexity:
 - O(1) (in-place)

 --------------------------------------------------------
 IMPORTANT PROPERTIES
 --------------------------------------------------------
 ✔ In-place
 ✔ Stable
 ✔ Adaptive (fast for nearly sorted arrays)
 ✔ Simple to implement

 --------------------------------------------------------
 WHEN TO USE
 --------------------------------------------------------
 - Small input size
 - Nearly sorted arrays
 - Online sorting (data comes gradually)

 --------------------------------------------------------
 INTERVIEW NOTES
 --------------------------------------------------------
 - Better than Bubble & Selection for nearly sorted data
 - Used in hybrid sorting algorithms
 - Shifts elements instead of swapping

********************************************************/
