#include <bits/stdc++.h> 
using namespace std;
bool isPossible(int *arr, int n)
{
    //  Write your code here.
     int cur =arr[0];
   cur--;
   for(int i=0;i<n;i++){
       int nxt =arr[i];

       if(nxt > cur) nxt--;
       else if (nxt < cur)
            return false;

      cur = nxt;      
   }
    return true;


}
bool isPossible2(int *nums, int n)
{
    //  Write your code here.
   int count = 0;
        
        for(int i = 0; i + 1 < n; ++i){
            if(nums[i] > nums[i + 1]){
                ++count;
                if(count > 1 || i > 0 && i + 2 < n && nums[i - 1] > nums[i + 1] && nums[i] > nums[i + 2])
                    return false;
            }
        }
        return true;
    }

int main(){
  int arr[] ={-10,10,0,10,3};
  int n=5;
  bool ans =isPossible2(arr,n);
  cout<<ans;
}