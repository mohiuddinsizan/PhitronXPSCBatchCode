#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;cin>>n;
    vector<long long>c;
    for(int i = 0;i<n;i++){
        long long x;cin>>x;
        c.push_back(x);
    }
    sort(c.begin(),c.end());
    long long sum = 0;
    int counter = 0;
    long long p = 0;
    for(int i = n-1;i>=0;i--){
        if(c[i]%2==0) {
            sum+=c[i];}
        else{
            counter++;
            if(counter%2==0) sum+=(c[i]+p);
            else p = c[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}