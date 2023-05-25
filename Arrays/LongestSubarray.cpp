#include<iostream>
using namespace std;

int Longestsubarray(int arr[],int n,int k){
    int length =0;
    int s =0;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        s +=arr[j];
        if(s==k)length=max(length,j-i+1);
      }
    }
    return length;
}
int Longestsubarray2(int arr[],int n,int k){
int len =0;
     int s=0;
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             s +=arr[j];
             if(s==k) len =min(len,j-i+1);
         }
     }
     return len;
}

int main(){
  int n=9;
  int arr[n] ={1,3,1,1,1,1,4,2,3};
  int k=3;
  int ans= Longestsubarray(arr,n,k);
  cout<<ans;

  return 0;
}



