#include<bits/stdc++.h>
using namespace std;
bool found = false;
int dp[10001];
int can(int A, int B, int C){
    if(C==0) {
        return true;
    }
    bool op1 = false,op2 = false;
    if(dp[C]!=-1) return dp[C];
    if(C>=B)
    {
        op1 = can(A,B,C-B);
    }
    if(C>=A){
        op2 = can(A,B,C-A);
    }
    return dp[C] = (op1||op2);
}
int main(){
    memset(dp,-1,sizeof(dp));
    int A,B,C;
    cin>>A>>B>>C;
    if(can(A,B,C)) cout<<"YES";
    else cout<<"NO"<<endl;
    return 0;
}