#include<bits/stdc++.h>

using namespace std;

int longestSubArrWithSumK_Optimal(int arr[], int n, int k) {
  int start = 0, end = -1, sum = 0, maxLength = 0;
  while (start < n) {
    while ((end + 1 < n) && (sum + arr[end + 1] <= k))
      sum += arr[++end];

    if (sum == k)
      maxLength = max(maxLength, (end - start + 1));

    sum -= arr[start];
    start++;
  }
  return maxLength;
}
int longestSubarrayWithSumK(vector<int> a, long long k);
int main() {

  vector<int> arr = {1,2,1,2,1};
  int n = sizeof(arr) / sizeof(arr[0]), k = 3;

  cout << "Length of the longest subarray with sum K is " << 
  longestSubarrayWithSumK(arr,  k);

  return 0;
}
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int left =0 ,right =0;
    long long sum =a[0];
    int maxlen =0;
    int n = a.size();

    while(right <n){
        while(left <=right && sum > k){
            sum -=a[left];
            left++;
        }
        if (sum == k) {
          maxlen = max(maxlen, right - left + 1);
        }
        right++;
        if (right < n)
          sum += a[right];
    }
    return maxlen;
}