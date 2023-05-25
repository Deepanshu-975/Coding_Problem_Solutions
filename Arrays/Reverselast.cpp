#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	for(int i=0;i<arr.size();i++){
		if(i < m){
			swap(arr[i],arr[i+1]);
		}
	}
}

int main(){
   vector<int> a ={1,2,3,4,5,6};
   int m =3;
   reverseArray(a,3);
   for(int i=0;i<a.size();i++){
    cout<<a[i];
   }
}