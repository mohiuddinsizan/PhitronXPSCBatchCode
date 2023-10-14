#include<bits/stdc++.h>
using namespace std;
int main(){

    long long n;cin>>n;
    vector<long long> v;
    vector<long long> presum;
    presum.push_back(0);
    for(long long i = 0;i<n;i++){
        long long x;cin>>x;
        v.push_back(x);
        presum.push_back(x + presum[i]);
    }
    sort(v.begin(),v.end());
    vector<long long> presum2;
    presum2.push_back(0);
    for(long long i = 0;i<n;i++){
        presum2.push_back(presum2[i] + v[i]);
    }
    long long q;cin>>q;
    while(q--){
        long long type;cin>>type;
        long long l,r;
        cin>>l>>r;
        if(type == 1){
            cout<<presum[r]-presum[l-1]<<endl;
        }
        else 
            cout<<presum2[r] - presum2[l-1]<<endl;

    }
    return 0;
}