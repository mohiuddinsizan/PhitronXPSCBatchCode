#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,t;
  cin>>a>>b>>t;
  int sum = 0;
  for(int i = a;i<=t+.5;i+=a){
    sum+=b;
  }
  cout<<sum;
  return 0;
}