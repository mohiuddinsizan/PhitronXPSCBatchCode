#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  cin.ignore();
  char arr[n+1];
  cin.getline(arr,n+1);
  int counter = 0;
  for(int i = 0;i<n-2;i++){
    if(arr[i]=='A' && arr[i+1]=='B' && arr[i+2]=='C') counter++;
  }
  cout<<counter<<endl;
  return 0;
}