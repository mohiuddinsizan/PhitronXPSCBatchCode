#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i = 0;i<n-1;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    bool flag = true;
    for(int i = 0;i<n-1;i++){
        if(v[i]!=i+1) {
            cout<<v[i]-1<<endl;
            flag = false;
            break;
        }
    }
    if(flag) cout<<n<<endl;
    return 0;
}