#include<bits/stdc++.h>
using namespace std;

int subarrsywithsumk(vector<int> a,int k){
  int xr =0;
  map<int,int> mpp;
  mpp[xr]++;
  int cnt =0;
  for(int i=0;i<a.size();i++){
    xr = xr ^ a[i];

    int x =xr ^ k;
    cnt +=mpp[x];
    mpp[xr]++;
  }
  return cnt;
}

int main(){
  vector<int> a ={4,2,2,6,4};
  int k =2;
  int ans =subarrsywithsumk(a,k);
  cout<<ans;
  return 0;
}