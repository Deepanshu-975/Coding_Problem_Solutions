#include<bits/stdc++.h>
using namespace std;

 void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	for(int i=0;i<arr.size();i++){
		if(i > m){
			swap(arr[i],arr[i+1]);
      break;
		}
	}
}

    int main(){

      int k=1;
      vector<int> A = {1,2,3,4};
      reverseArray(A,k);
      for(auto it:A){
        cout<<it<<" ";
      }
      
    }