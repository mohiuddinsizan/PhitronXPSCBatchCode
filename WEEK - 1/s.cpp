#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int mover = 0;
        for(int i = 0;i<n;i++){
            int x;cin>>x;
            if(x>i+1+mover) (mover+=(x-(i+1+mover))); 
        }
        cout<<mover<<endl;
        mover = 0;
    }

    return 0;
}