#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        vector<int> v(10001);
        for(int i = 0;i<10001;i++){
            v[i] = 0;
        }
        int ans = 0;
        int n;cin>>n;
        vector<int> vect;
        for(int i = 0;i<n;i++){
            int x;cin>>x;
            vect.push_back(x);
            v[x]++;
        }
        sort(vect.begin(),vect.end());
        auto last = unique(vect.begin(),vect.end());
        vect.erase(last,vect.end());
        for(int i : vect){
            //cout<<v[i]<< " "<<i<<endl;
            if(v[i]>1) ans+=(v[i]-1);
        }
        //cout<<ans<<endl;
        if(ans%2==0) cout<<n-ans<<endl;
        else cout<<n -(ans) -1<<endl;

    }
    return 0;
}