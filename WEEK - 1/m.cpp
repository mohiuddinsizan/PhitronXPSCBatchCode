#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        cin.ignore();
        char arr[n+1];
        vector<int> v(26);
        for(int i = 0;i<26;i++){
            v.push_back(0);
        }
        cin.getline(arr,n+1);
        for(int i = 0;i<n;i++){
            if(v[arr[i]-'A'] == 0){
                v[arr[i]-'A']+=2;
            }
            else v[arr[i]-'A']++;
        }
        int sum = 0;
        for(int i = 0;i<26;i++){
            sum+=v[i];
        }
        cout<<sum<<endl;
        
    }
    return 0;
}