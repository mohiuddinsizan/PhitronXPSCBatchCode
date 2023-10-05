#include<bits/stdc++.h>
using namespace std;
int main(){
  char arr[100004];
  cin.getline(arr,100004);
  for(int i = 0;i<strlen(arr);i+=2){
    cout<<arr[i];
  }
  return 0;
}