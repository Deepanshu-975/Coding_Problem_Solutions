#include<bits/stdc++.h>
using namespace std;

// 3sum Brute force approach
//Time Complexity : O(n^3)   // 3 loops
// Space Complexity : O(3*k)  // k is the no.of triplets


vector<vector<int>> triplet(int n,vector<int> &nums){
  set<vector<int>> st;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){
        if(nums[i] + nums[j]+ nums[k] ==0){
          vector<int> temp ={nums[i],nums[j],nums[k]};
          sort(temp.begin(),temp.end());
          st.insert(temp);
        }
      }
    }
  }
  vector<vector<int>> ans(st.begin(),st.end());
  return ans;
}

// better approach Time Complexity : O(n^3)   // 3 loops

// Space Complexity : O(3*k)  // k is the no.of triplets

vector<vector<int>> triplet2(int n, vector<int> &nums)
{
    set<vector<int>> st;
  for(int i=0;i<n;i++){
    set<int> hashset;
    for(int j=i+1;j<n;j++){
        int third = -(nums[i]+nums[j]);
        if(hashset.find(third) != hashset.end()){
            vector<int> temp ={nums[i],nums[j],third};
            sort(temp.begin(),temp.end());
            st.insert(temp);
        }
        hashset.insert(nums[j]);
    }
  }
  vector<vector<int>> ans(st.begin(),st.end());
  return ans;
}

vector<vector<int>> triplet3(int n, vector<int> &nums,int x)
{
     vector<vector<int>> ans;
     sort(nums.begin(),nums.end());

  for(int i=0;i<n;i++){
   if(i>0 && nums[i] == nums[i-1]) continue;
   int j =i+1;
   int k =n-1;
   while(j<k)
{
    int sum =nums[i]+nums[j]+nums[k];
    // if(sum < 0){
    //     j++;
    // }
    // else if(sum > 0){
    //     k--;
    // }
    // else {
    //     vector<int> temp ={nums[i],nums[j], nums[k]};
    //     ans.push_back(temp);
    //     j++;
    //     k--;
    //     while(j<k && nums[j] == nums[j-1]) j++;
    //     while(j<k && nums[k] == nums[k+1]) k--;
    if(x== || sum == x-1) return sum;
    }
}    
    
  }
 
  return ans;
}


int main(){
  vector<int> a ={-1,0,1,2,-1,-4};

  vector<vector<int>> ans =triplet3(a.size(),a);
 for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}





