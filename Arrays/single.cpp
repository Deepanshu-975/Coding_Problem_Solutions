#include<bits/stdc++.h>
using namespace std;

   int singleNumber(vector<int>& nums) {
        int x1 =0;
	    for(int i=0;i<nums.size();i++){
	        x1 =x1^nums[i];
	    }
	    return x1;
    }

    int main(){
      vector<int> a ={1,1,2,2,5};
      int ans =singleNumber(a);
      cout<<ans;
      return 0;
    }