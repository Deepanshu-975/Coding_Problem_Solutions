#include<bits/stdc++.h>
using namespace std;

// brute force apprach 

    // Time Complexity : O(N^2), Where N is the size of the Array(nums). Here Two nested loop creates the time 
    // complexity.

    // Space complexity : O(1), Constant space. Extra space is only allocated for the Array(output), however the
    // output does not count towards the space complexity.

    // Solved using Array(Two Nested Loop). Brute Force Approach.

    // Note : This will give TLE.
 vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans ;
        int n =nums.size();
        for(int i=0;i<n;i++){
            int product =1;
            for(int j=0;j<n;j++){
                if(i==j) continue;
                else{
                 product *= nums[j]; 
                }
            }
            ans.push_back(product);
        }
        return ans;
    }