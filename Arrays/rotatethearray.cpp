    #include<bits/stdc++.h>
    using namespace std;

    // time complexity O(N^2) space complexity : O(1);
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        // Take a tranpose of the matrix
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        // Reverse each row of the matrix to get the output
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), end(matrix[i]));
        }
        cout << "The Final matrix is: \n";
    for (auto it : matrix) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    }

    int main(){
      vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
   
     rotate(matrix);

    
    return 0;
    }