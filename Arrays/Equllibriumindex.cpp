#include<bits/stdc++.h>
using namespace std;
// Method 2 (Tricky and Efficient) 
// The idea is to get the total sum of the array first. Then Iterate through the array and keep updating the left sum which is initialized as zero. In the loop, we can get the right sum by subtracting the elements one by one. Thanks to Sambasiva for suggesting this solution and providing code for this.

// 1) Initialize leftsum  as 0
// 2) Get the total sum of the array as sum
// 3) Iterate through the array and for each index i, do following.
//     a)  Update sum to get the right sum.  
//            sum = sum - arr[i] 
//        // sum is now right sum
//     b) If leftsum is equal to sum, then return current index. 
//        // update leftsum for next iteration.
//     c) leftsum = leftsum + arr[i]
// 4) return -1 
// If we come out of loop without returning then Time Complexity: O(n)  :  Auxiliary Space: O(1)
// there is no equilibrium index

int equilibrium(int arr[], int n)
{
    int sum = 0; // initialize sum of whole array
    int leftsum = 0; // initialize leftsum
 
    /* Find sum of the whole array */
    for (int i = 0; i < n; ++i)
        sum += arr[i];
 
    for (int i = 0; i < n; ++i)
    {
        sum -= arr[i]; // sum is now right sum for index i
 
        if (leftsum == sum)
            return i;
 
        leftsum += arr[i];
    }
 
    /* If no equilibrium index found, then return 0 */
    return -1;
}

int findEquilibriumIndex(vector<int> &arr) {
    // Write your code here.
    int i ,j;
    int leftsum ,rightsum;

    for(i=0;i<arr.size();i++){

        leftsum =0;
        for(j =0;j<i;j++){
            leftsum +=arr[j];
        }

        rightsum =0;
        for( j=i+1;j<arr.size();j++){
          rightsum +=arr[j];
        }

        if(leftsum == rightsum)return i;
    }
    return -1;
}

// tc:o(n^2)
// sc:O(1)

int main()
{
    int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << "First equilibrium index is " << equilibrium(arr, arr_size);
    return 0;
}