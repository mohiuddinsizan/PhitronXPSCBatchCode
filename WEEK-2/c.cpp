#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v;
        int mn= INT_MAX;
        int sum = 0;
        for(int i = 0;i<n;i++){
            int x;cin>>x;
            v.push_back(x);
            if(x<mn) mn = x;
        }
        for(int i = 0;i<n;i++){
            sum+=(v[i]-mn);
        }
        cout<<sum<<endl;
    }
    return 0;
}