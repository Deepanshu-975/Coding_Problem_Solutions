#include<bits/stdc++.h>
using namespace std;

// brute force approach 
int missingNumber(vector<int>&a, int N) {

    // Outer loop that runs from 1 to N:
    for (int i = 1; i <= N; i++) {

        // flag variable to check
        //if an element exists
        int flag = 0;

        //Search the element using linear search:
        for (int j = 0; j < N - 1; j++) {
            if (a[j] == i) {

                // i is present in the array:
                flag = 1;
                break;
            }
        }

        // check if the element is missing
        //i.e flag == 0:

        if (flag == 0) return i;
    }

    // The following line will never execute.
    // It is just to avoid warnings.
    return -1;
}

// better approach using 
int missingNumber2(vector<int> &a,int n){
     int hash[n+1] ={0};
     for(int i=0;i<n-1;i++){
      hash[a[i]]++;
     }

     for(int i=1;i<n;i++){
      if(hash[i]==0)
      return i;
     }
     return -1;
}
// optimal approach1 
int missingNumber3(vector<int> &a,int n){
  int sum = (n*(n+1))/2;
  int s =0;
  for(int i=0;i<n-1;i++){
    s +=a[i];
  }
  int missingNum = sum - s;
    return missingNum;
}

// optimal approach2
int missingNumber4(vector<int> &nums,int n){
   int x1 = 0, x2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            x1 = x1 ^ nums[i];
            x2 = x2 ^ (i + 1);
        }
        return x1 ^ x2;
}
int firstMissing(int arr[], int n)
{
    // Write your code here.
    for(int i=0;i<n;i++){
        if(arr[i]!=i)return i;
    }
    return -1;
}


int main()
{
    int N = 4;
    int a[] = {3,4,-1,1};
    int ans = firstMissing(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}