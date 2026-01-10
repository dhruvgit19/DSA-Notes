/*
====================================
        ARRAYS IN C++ - NOTES
====================================

1. Definition:
   - An array is a collection of elements of the same data type
   - Stored in contiguous memory locations
   - Accessed using index (starting from 0)

2. Syntax:
   datatype arrayName[size];

   Example:
   int numbers[5];   // array of 5 integers

3. Initialization:
   int numbers[5] = {10, 20, 30, 40, 50};

   - numbers[0] = 10
   - numbers[4] = 50

4. Accessing Elements:
   cout << numbers[2];   // prints 30

5. Changing Elements:
   numbers[1] = 100;   // now numbers[1] = 100

6. Input from User:
   for(int i=0; i<5; i++){
       cin >> numbers[i];
   }

7. Output Elements:
   for(int i=0; i<5; i++){
       cout << numbers[i] << " ";
   }

8. Key Points:
   - Index starts from 0
   - If size is N, last index is N-1
   - Array size must be a constant (in basic C++)
   - Array elements are stored next to each other in memory

====================================
*/



// 1-D ARRAY : 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5];
//     cin >> arr[0] >> arr [1] >> arr[2] >> arr[3] >> arr[4];

//     cout << arr[3];
//     return 0;
// }



// 2-D ARRAY :

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][5];

    arr[1][3] = 78;
    cout << arr[1][3];
}