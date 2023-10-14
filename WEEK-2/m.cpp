#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;cin>>n;
    vector<int> v;
    int mx = INT_MIN;
    for(int i = 0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
        if(x>mx) mx = x;
    }
    int main_ans = INT_MIN;
    int p;
    for(int i = 2;i<=mx;i++){
        int ans = 0;
        for(int x : v){
            if(x%i==0) ans++;
        } 
        if(ans>=main_ans) {
            main_ans = ans;
            p = i;
        }
    }
    cout<<p;
    return 0;
}