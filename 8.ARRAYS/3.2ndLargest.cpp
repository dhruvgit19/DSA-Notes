/* 
                              Brute Force (Sorting) : 

Idea:
- Sort the array
- Traverse from the end to find the first element
  smaller than the largest

Steps:
1. Sort the array
2. Let largest = arr[n-1]
3. Traverse from n-2 to 0
4. First element < largest is the answer

Time Complexity: O(n log n)
Space Complexity: O(1) / O(n) depending on sort
*/


/*                             BETTER SOLUTION : 

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

    int seclargest = -1;
    for(int i=0; i<=n; i++){
        if(arr[i]>seclargest && arr[i]<largest){
            seclargest = arr[i];
        }
    }
    cout << "Second Largest element : " << seclargest;
}


Idea:
- First pass: find largest element
- Second pass: find largest element smaller than max

Steps:
1. Find largest element
2. Initialize secondLargest = -1
3. Traverse again:
   - if arr[i] < largest AND arr[i] > secondLargest
     update secondLargest

Time Complexity: O(n)
Space Complexity: O(1)
*/



//                              OPTIMAL SOLUTION : 

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
    int seclargest = -1;
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            seclargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>seclargest){
            seclargest = arr[i];
        }
    }
    cout << "Second Largest element : " << seclargest;
}



/* Idea:
- Maintain two variables:
  largest and secondLargest
- Update both in one traversal

Steps:
1. Initialize:
   largest = arr[0]
   secondLargest = -1
2. Traverse array:
   a) If arr[i] > largest:
        secondLargest = largest
        largest = arr[i]
   b) Else if arr[i] < largest AND arr[i] > secondLargest:
        secondLargest = arr[i]

Time Complexity: O(n)
Space Complexity: O(1)
*/