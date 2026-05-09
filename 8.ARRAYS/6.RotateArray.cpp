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

//     int d;
//     cout << "No. of rotations : ";
//     cin >> d;
//     d=d%n;

//     int temp[d];
//     for(int i=0;i<d;i++){
//         temp[i] = arr[i];
//     }
    
//     for(int i=d;i<n;i++){
//         arr[i-d]=arr[i];
//     }

//     for(int i=n-d;i<n;i++){
//         arr[i] = temp[i-(n-d)];
//     }

//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
// }





// ROTATE EACH ELEMENT BY 1 POSITION TO LEFT : 
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
//     int temp=arr[0];
//     for(int i=1;i<n;i++){
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;

//     for(int i=0; i<n; i++){
//         cout << arr[i];
//     }
// }





// ROTATE EACH ELEMENT BY d POSITION TO LEFT : 
// BRUTE
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

    int d;
    cout<<"Number of places : ";
    cin >> d;
    vector<int> temp(d);
    for(int i=d+1; i<n; i++){
        temp[i-d+1]=arr[i];
    }

    for(int i=0;i<=d;i++){
        arr[i+d]=arr[i];
    }

    for(int i=0;i<d;i++){
        arr[i]=temp[d];
    }

    for(int i=0; i<n; i++){
        cout << arr[i];
    }
    
}





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

//     int d;
//     cout<<"Number of places : ";
//     cin >> d;
//     vector<int> temp(d);
//     for(int i=0; i=d; i++){
//         temp[i]=arr[i];
//     }

//     for(int i=d+1;i<n;i++){
//         arr[i-d]=arr[i];
//     }

//     int x=0;
//     for(int i=n-d;i<n;i++){
//         arr[i]=temp[x];
//         x++;
//     }

//     for(int i=0; i<n; i++){
//         cout << arr[i];
//     }
    
// }