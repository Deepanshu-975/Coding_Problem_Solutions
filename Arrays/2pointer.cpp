// 2sum Time complexity: O(N); Space Complexity: O(N);


#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
       
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(target - nums[i]) == mp.end())
                mp[nums[i]] = i;
            else
                return {mp[target - nums[i]], i};
        }
 
        return {-1, -1};
    }

    int main(){
      vector<int> v ={2,1,7,4};
      int target=8;
      vector<int> ans =twoSum(v,target);
    
      for(auto it:ans){
        cout<<it<<" ";
      }

    }