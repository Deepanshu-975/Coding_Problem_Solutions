#include<bits/stdc++.h>
using namespace std;

 int  vector<int> topK(vector<int>& nums, int k){
  unordered_map<int,int> mpp ;
        for(int i = 0; i < nums.size() ;++i){
            mpp[nums[i]]++ ;
        }

           vector<int> v ;
        while(k != 0){
            int max = -1 ;
            int num = -1 ;
            for(auto it : mpp){
                if(it.second > max){
                    max = it.second ;
                    num = it.first ;
                }
                
            }
            v.push_back(num) ;
            mpp.erase(num) ;
            k-- ;
        }
        
        return v ;
  }
  int main(){
   vector<int> vect;
    vect.push_back(10);
    vect.push_back(20);
   int k =2;
   int ans =topK(vect,k);

    
  }