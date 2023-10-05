#include<bits/stdc++.h>
using namespace std;
int main(){
  char  p [5];
  string s1 = "000";
  string s2 = "00";
  string s3 = "0";
  cin.getline(p,5);
  if(strlen(p)==1) {
    cout<<s1<<p<<endl;}
  else if(strlen(p)==2) {cout<<s2<<p<<endl;}
  else if(strlen(p)==3) {;cout<<s3<<p<<endl;}
  else {cout<<p<<endl;}
  return 0;
}