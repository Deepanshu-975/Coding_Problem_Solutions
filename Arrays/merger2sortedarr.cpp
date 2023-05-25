#include<bits/stdc++.h>
using namespace std;

// brute force approach 
void merge(int arr1[],int arr2[],int n,int m){
  long long arr3[n+m];
  int left =0;
  int right =0;
  int index=0;
  while(left < n && right <m){
    if(arr1[left] <=arr2[right]){
      arr3[index] = arr1[left];
      left++ , index++;
    }
    else {
      arr3[index] = arr2[right];
      right++, index++;
    }
  }
  while(left < n){
    arr3[index++] =arr1[left++];
  }
  while(right < m){
    arr3[index++] =arr2[right++];
  }

  for(int i=0;i<n+m;i++){
    if(i<n) arr1[i]= arr3[i];
    else arr2[i]=arr3[i];
  }

  for(int i=0;i<n+m;i++){
    cout<<arr3[i]<<" ";
  }

}

// 2 approach optimal 
void merge2(int arr1[],int arr2[],int n,int m){
  int left =n-1;
  int right =0;
  while(n >= 0 && right <m){
    if(arr1[left]>arr2[right]){
      swap(arr1[left],arr2[right]);
      left-- ,right++;
    }
    else{
      break;
    }
  }
  sort(arr1,arr1+n);
  sort(arr2,arr2+n);
}
void 3(int arr1[],int arr2[],int n,int m){
  
}

int main(){
  int n=4;
  int m=5;
  int arr1[] ={1,3,5,7};
  int arr2[] ={0,2,6,8,9};
  merge2(arr1,arr2,n,m);
  

}