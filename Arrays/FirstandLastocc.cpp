#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
     int first=-1;
     int last=-1;
     int n=nums.size();
     for(int i=0;i<n;i++){
        if(nums[i]!=target){
           continue;
        }
       else if(first==-1){
            first=i;
            last=i;
        }
        else{
         last=i;
        }   
     }
        if(first!=-1){
            return {first,last};
        }
        return {-1,-1};
    }
int main() {
  vector<int> arr{100,200,200};
  int target =200;
  vector<int> lon = searchRange(arr,target);
  for(auto it:lon){
    cout<<it<<" ";
  }
return 0;
}