#include<bits/stdc++.h>
using namespace std;
int dp[3001];
bool prime(int n){
    if(dp[n]!=-1) return dp[n];
    int p = 0;
    for(int i = 1;i<=n;i++){
        if(n%i == 0) p++;
        if(p > 2) return dp[n] = 0;
    }
    return dp[n] = 1;
}
int main(){

    int n;cin>>n;
    int counter = 0;
    memset(dp,-1,sizeof(dp));
    for(int i = 2;i<=n;i++){
        if(!prime(i)){
            int p = 0;
            for(int j = 2;j<=n;j++){
                if(prime(j) && (i%j)==0) p++;
                if(p>2) break;
            }
            if(p==2) counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}