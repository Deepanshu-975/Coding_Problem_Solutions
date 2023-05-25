#include<bits/stdc++.h>
using namespace std;

/* Given an integer array nums sorted in non-decreasing order,
  remove some duplicates in-place such that each unique element appears at most twice.
  The relative order of the elements should be kept the same.

Apprach: -
Initialize a variable i to 0.
Loop through each n in nums.
Check if i is less than 2 or n is greater than the nums[i-2].
If the condition is true, assign n to nums[i] and increment i by 1.
Return i. 

Time complexity: O(N)
Space complexity:O(1)

*/

   int removeDuplicates(vector<int>& nums) {
        int i = 0;
    for (int n : nums)
        if (i < 2 || n > nums[i-2])
            nums[i++] = n;

    return i;
    }

    int main(){
      vector<int> v={1,1,1,2,2,3};
      cout<<removeDuplicates(v);
      for(auto it:v){
        cout<<it<<" ";
      }
    }