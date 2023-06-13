#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string , int> m;
        for(vector<int> row :grid){
            m[buildstring(row)]++;
        }
        int ans =0;
        for(int j=0;j<grid[0].size();j++){
            string result="";
            for(int i=0;i<grid.size();i++){
                result +=to_string(grid[i][j]);
                result +="#";
            }
            ans +=m[result];
        }
        return ans;
    }
    string buildstring(vector<int> row ){
        string result="";
        for(int ele : row){
            result +=to_string(ele);
                result +="#";
        }
        return result;
    }
};