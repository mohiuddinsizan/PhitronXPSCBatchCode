#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        string arr[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        
        int ans = INT_MAX;
        for(int k = 0;k<n;k++){
            for(int i = 0;i<n;i++){
                int sum  = 0;
                if(i==k) continue;
                for(int j = 0;j<arr[i].size();j++){
                    int dis = abs(arr[i][j] - arr[k][j]);
                    sum+=dis;
                }
                ans = min(ans,sum);
            }

        }
        cout<<ans<<endl;
    }

    return 0;
}