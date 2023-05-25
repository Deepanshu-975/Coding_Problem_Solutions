#include <iostream>
using namespace std;
 
/* prints element and NGE pair
for all elements of arr[] of size n */
void printNGE(int arr[], int n)
{
    int next, i, j;
    for (i = 0; i < n; i++) {
        next = -1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                next = arr[j];
                break;
            }
        }
        cout << arr[i] << " --> " << next << endl;
    }
}
vector<int> nextGreaterElement(vector<int>& arr, int n){
    // Write your code here.
    vector<int> ans;
    for(int i=0;i<n;i++){
        int temp =-1;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                temp =arr[j];
                break;
            }
        }
        ans.push_back(temp);
    }
    return ans;
}
 
// Driver Code
int main()
{
vector<int> arr = { 11, 13, 21, 3};
   int n=4;
   vector<int> ans = nextGreaterElement(arr, n);
   for(auto it:ans){
    cout<<it;
   }
    return 0;
}