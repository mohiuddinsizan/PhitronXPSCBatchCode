#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<long long> v;
    int n;cin>>n;
    for(int i = 0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i = 1;i<n-1;i++){
        if(v[i]!=v[i-1] && v[i]!=v[i+1]) cout<<v[i]<<endl;
        else if(i==n-2 && v[i]!=v[i+1]) cout<<v[i+1]<<endl;
        else if(i==1 && v[i]!= v[i-1]) cout<<v[i-1]<<endl;
    }
    
    return 0;
}