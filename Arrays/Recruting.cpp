#include<bits/stdc++.h>
using namespace std;

// pass by value 
// void printName(int n){
  // pass by reference
void printName(int n){
  cout<<n<<endl;
  n+=3;
  cout<<n<<endl;
  n+=12;
  cout<<n<<endl;

}
int main(){
  // function
  int n = 1 ;
  printName(n);
  cout<<n;

}