#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);   // FIX HERE
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // precomputation
    map<int, int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }

    return 0;
}
