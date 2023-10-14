#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i = 0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    for(int x : v){
        if(x == k) continue;
        cout<<x<<" ";
    }

    return 0;
}