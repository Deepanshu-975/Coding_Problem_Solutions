#include <bits/stdc++.h>

using namespace std;

vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
  map < int, int > freq;
  vector < int > Union;
  for (int i = 0; i < n; i++)
    freq[arr1[i]]++;
  for (int i = 0; i < m; i++)
    freq[arr2[i]]++;
  for (auto & it: freq)
    Union.push_back(it.first);
  return Union;
}
// median
double median(vector<int> a, vector<int> b)
{
    // Write your code here.
    int n =a.size();
    int m =b.size();
      map < int, int > freq;
  vector < int > Union;
  for (int i = 0; i < n; i++)
    freq[a[i]]++;
  for (int i = 0; i < m; i++)
    freq[b[i]]++;
  for (auto & it: freq)
    Union.push_back(it.first);
  
 double median =0;
  for(auto it:Union){
      median =(Union.size()+1)/2;
  }
  return median;
}

// using set data structure 
vector < int > FindUnion2(int arr1[], int arr2[], int n, int m) {
  set < int > s;
  vector < int > Union;
  for (int i = 0; i < n; i++)
    s.insert(arr1[i]);
  for (int i = 0; i < m; i++)
    s.insert(arr2[i]);
  for (auto & it: s)
    Union.push_back(it);
  return Union;
}

// optimise approach using 2 pointers  Time Complexity: O(m+n)  Space Complexity : O(m+n)

vector < int > FindUnion3(int arr1[], int arr2[], int n, int m) {
  int i = 0, j = 0; // pointers
  vector < int > Union; // Uninon vector
  while (i < n && j < m) {
    if (arr1[i] <= arr2[j]) // Case 1 and 2
    {
      if (Union.size() == 0 || Union.back() != arr1[i])
        Union.push_back(arr1[i]);
      i++;
    } else // case 3
    {
      if (Union.size() == 0 || Union.back() != arr2[j])
        Union.push_back(arr2[j]);
      j++;
    }
  }
  while (i < n) // IF any element left in arr1
  {
    if (Union.back() != arr1[i])
      Union.push_back(arr1[i]);
    i++;
  }
  while (j < m) // If any elements left in arr2
  {
    if (Union.back() != arr2[j])
      Union.push_back(arr2[j]);
    j++;
  }
  return Union;
}

int main() {
  int n = 10, m = 7;
  vector<int> arr1 = {2 ,4 ,6};
  vector<int> arr2 = {1,3,5};
 double Union = median(arr1, arr2);
  cout << "Median "<<Union << endl;
  
  return 0;
}