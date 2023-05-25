#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> v) {
	// Write your code here
	int cnt1 =0 ,cnt2=0;
	int ele1 =INT_MIN;
	int ele2 =INT_MIN;

	for(int i=0;i<v.size();i++){
		if(cnt1 == 0 && ele2 != v[i]){
			cnt1 =1;
			ele1 =v[i];
		}
		else if(cnt2 == 0 && ele1 != v[i]){
			cnt2 =1;
			ele2 =v[i];
		}
		else if(v[i]==ele1) cnt1++;
		else if(v[i]==ele2) cnt2++;
		else{
			cnt1-- ,cnt2--;
		}
	}
	vector<int> ls;
	cnt1 =0,cnt2=0;
	for(int i=0;i<v.size();i++){
		if(ele1 == v[i])cnt1++;
		if(ele2 == v[i]) cnt2++;
	}
	int mini = (int)(v.size()/3);
	if(cnt1 >= mini)ls.push_back(ele1);
	if(cnt2 >= mini)ls.push_back(ele2);
	sort(ls.begin(),ls.end());
	return ls;
}
int main() {
  vector<int> arr = {3,2,3};
  vector < int > majority;
  majority = majorityElement(arr);
  cout << "The majority element is ";

  for (auto it: majority) {
    cout << it << " ";
  }
}