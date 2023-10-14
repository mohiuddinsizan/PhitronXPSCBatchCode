#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s ;cin>>s;
        if(s.size()!=5) cout<<"NO"<<endl;
        else 
        {
            int counter = 0;
            if(s[0] == 'T'|| s[1] == 'T'|| s[2]== 'T' || s[3] == 'T' || s[4] == 'T') counter++;
            if(s[0] == 'i'|| s[1] == 'i'|| s[2]== 'i' || s[3] == 'i' || s[4] == 'i') counter++;
            if(s[0] == 'm'|| s[1] == 'm'|| s[2]== 'm' || s[3] == 'm' || s[4] == 'm') counter++;
            if(s[0] == 'u'|| s[1] == 'u'|| s[2]== 'u' || s[3] == 'u' || s[4] == 'u') counter++;
            if(s[0] == 'r'|| s[1] == 'r'|| s[2]== 'r' || s[3] == 'r' || s[4] == 'r') counter++;
            if(counter == 5) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
    }
    return 0;
}