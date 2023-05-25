#include<bits/stdc++.h>
using namespace std;

void stockBuySell(int price[], int n){
int profit=0;
    int start=0;
 for(int i=0;i<n-1;i++)
 {  
     if(price[i]<price[i+1]&&start==0)
     {
         cout<<"("<<i<<" ";
         start=1;
         profit=1;
     }else if(price[i]>price[i+1] && start==1)
     {
         cout<<i<<")"<<" ";
         start=0;
     }
 }
 
 if(profit==0)
 {
     cout<<"No Profit"<<" ";
 }if(start==1)
 { //last element
      cout<<n-1<<")"<<" ";
      //unlimited output
 }cout<<endl;
}


int main() {
  int n =6;
    int arr[] = {7,1,5,3,6,4};
    stockBuySell(arr,n);
    
}