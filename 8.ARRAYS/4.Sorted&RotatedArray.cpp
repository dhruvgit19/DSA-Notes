// Check if Array Is Sorted and Rotated 

// Problem Summary : 
// We are given an array nums.

// Return true if:

// The array was originally sorted in non-decreasing order

// Then rotated some number of times (including 0)

// Duplicates are allowed.

#include<bits/stdc++.h>
using namespace std;
int main(){
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                count++;
            }
        }

        if(nums[0]<nums[n-1]){
            count++;
        }

        if(count<=1){
            return true;
        }
        else return false;
    }
};
}