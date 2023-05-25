#include <bits/stdc++.h> 
using namespace std;
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
	int max =INT_MIN;
	int min =INT_MAX;

	for(int i=0;i<n ;i++){
			if(arr[i]<min)min =arr[i];
		else max =arr[i];
	
	}
	int sum =max +min;
	return sum;
}

int main(){
  int arr[] ={-1 , -4, 5, 8,9,3 };
  int n =7;
  int ans =sumOfMaxMin(arr,n);
  cout<<ans;
}