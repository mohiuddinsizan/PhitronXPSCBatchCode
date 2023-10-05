#include<bits/stdc++.h>
using namespace std;
int main(){
  long long counter = 0;
  long long x,y;
  cin>>x>>y;
  for(long long i = x;i<=y;i*=2){
    counter ++;
  }
  cout<<counter<<endl;
  return 0;
}