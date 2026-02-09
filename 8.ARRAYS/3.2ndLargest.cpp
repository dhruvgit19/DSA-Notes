// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout << "No. of elements : ";
//     cin >> n;
//     int arr[n];

//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
    
//     int largest = arr[0];
//     for(int i=0; i<n; i++){
//         if(arr[i]>largest){
//             largest = arr[i];
//         }
//     }

//     int seclargest = -1;
//     for(int i=0; i<=n; i++){
//         if(arr[i]>seclargest && arr[i]<largest){
//             seclargest = arr[i];
//         }
//     }
//     cout << "Second Largest element : " << seclargest;
// }




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