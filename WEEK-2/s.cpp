#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b,int c){
    int x = min(a,min(b,c));
    int ans = 1;
    for(int i = 1;i<=x;i++){
        if(a%i == 0 && b%i == 0 && c%i == 0){
            ans = i;
        }
    }
    return ans;
}
int main(){

    int k;cin>>k;
    int sum = 0;
    for(int i = 1;i<=k;i++){
        for(int j = 1;j<=k;j++){
            for(int m = 1;m<=k;m++){
                sum+=gcd(i,j,m);
            }
        }
    }
    cout<<sum<<endl;

    return 0;
}