#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k;
    cin>>n;
    vector<int> v;
    for(int i = 0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    cin>>k;
    while(k--){
        int i,j;
        cin>>i>>j;
        int sum = 0;
        for(int l = i;l<=j;l++)
            sum+=v[l];
        cout<<sum<<endl;
    }

    return 0;
}