#include<bits/stdc++.h>
using namespace std;
vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {
    // Write your code here.
    int n =MATRIX.size();
    int m =MATRIX[0].size();

    int top =0 ,left =0;
    int bottom =n-1 ,right=m-1;
    vector<int> ans;

    while(top<=bottom && left<= right){
        for(int i=left;i<=right;i++){
            ans.push_back(MATRIX[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(MATRIX[i][right]);
        }
        right--;

        if(top <=bottom){
        for(int i =right;i>=left;i--){
            ans.push_back(MATRIX[bottom][i]);
        }
        bottom--;
        }
        if(left <=right){
          for (int i = bottom; i >= top; i--) {
            ans.push_back(MATRIX[i][left]);
          }
          left++;
        }
    }
    return ans;
}

int main() {
    
  //Matrix initialization.
  vector<vector<int>> mat   {{1, 2, 3, 4},
                             {5, 6, 7, 8},
	                         {9, 10, 11, 12},
		                     {13, 14, 15, 16}};
		                     
  vector<int> ans = spiralMatrix(mat);

  for(int i = 0;i<ans.size();i++){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;
  
  return 0;
}