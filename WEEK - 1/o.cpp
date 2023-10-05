#include<bits/stdc++.h>
using namespace std;
int main(){
  char arr[100004];
  cin.getline(arr,100004);
  vector<int> v;
  for(int i = 0;i<26;i++){
    v.push_back(0);
  }
  for(int i = 0;i<strlen(arr);i++){
    v[arr[i]-'a']++;
  }
  bool flag = true;
  for(int i = 0;i<26;i++){
    if(v[i]==0) {
      flag = false;
      cout<<char(i+'a');
      break;
    }
  }
  if(flag)cout<<"None"<<endl;
  return 0;
}