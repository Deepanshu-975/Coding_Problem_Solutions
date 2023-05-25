#include<bits/stdc++.h>
using namespace std;

// brute force approach Time complexity: o(n) Space complexity: o(n)

void zerosToEnd(int arr[],int n) {

        int temp[n];
        int k=0;
        for (int i=0;i<n;i++){
            if (arr[i]!=0){
                temp[k]=arr[i];
                k++;
            }
        }
       
        while (k<n){
            temp[k]=0;
            cout<<" "<<k<<endl;
            k++;
        }
        for(int i=0;i<n;i++)
        {
            cout<<temp[i]<<" ";
        }
    }

    // optimize approach 
    	void pushZerosToEnd2(int arr[], int n) {
	    // code here
	   // optimize approach 
	    int k = 0;
  while (k < n) {
    if (arr[k] == 0) {

      break;
    } else {
      k = k + 1;
    }
  }


  //finding zeros and immediate non-zero elements and swapping them
  int i = k, j = k + 1;

  while (i < n && j < n) {
    if (arr[j] != 0) {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;

    }

    j++;

  }
  for (i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
	        
	    }
// leetcode
 void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        if(n==0 || n==1)
        {
            return;
        }

        int left=0;
        int right=0;

        while(right<n)
        {
            if(nums[right]==0)
            {
                ++right; 
            }

            else
            {
                swap(nums[left],nums[right]);
                ++left;
                ++right;
            }    
        }   
         for(auto it:nums){
          cout<<it<<" ";
         }
    }     

int main() {

      vector<int> arr ={1,5,8,0,6,0};
      moveZeroes(arr);
}