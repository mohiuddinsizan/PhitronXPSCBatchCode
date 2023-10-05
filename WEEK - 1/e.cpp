#include<bits/stdc++.h>
using namespace std;
int main(){
  double x;cin>>x;
  double answer = (((floor)(x))+((ceil)(x)))/2;
  if(x<answer)cout<<(int)((floor)(x));
  else cout<<(int)((ceil)(x));
  return 0;
}