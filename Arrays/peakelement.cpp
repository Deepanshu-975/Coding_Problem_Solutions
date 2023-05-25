#include<bits/stdc++.h>
using namespace std;

   int findPeakElement(vector<int>& nums) {
        int low =0;
      
        int high =nums.size()-1;

       while(low < high){
            int mid = (low + high) >> 1;
            if(nums[mid] > nums[mid+1]){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }

    int main(){
      vector<int>nums ={1,2,3,1};
      int ans =findPeakElement(nums);
      cout<<ans;
    }