#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        vector<int> v(200001);
        for(int i = 0;i<200001;i++){
            v[i] = 0;
        }
        int ans = -1;
        int n;cin>>n;
        for(int i = 0;i<n;i++){
            int x;cin>>x;
            v[x]++;
            if(v[x]>=3) ans = x;
        }
        cout<<ans<<endl;
    }
    return 0;
}