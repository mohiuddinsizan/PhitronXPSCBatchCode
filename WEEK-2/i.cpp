#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
    bool flag = false;
    char s1 = s[0];
    char s2 = s[1];
    char s3 = s[2];
    char s4 = s[3];
    for(char a = s1;a<='9';a++){
        for(char b = s2;b<='9';b++){
            for(char c = s3;c<='9';c++){
                for(char d = s4+1;d<='9';d++){
                    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
                        cout<<a<<b<<c<<d<<endl;
                        return 0;
                    }
                }
                s4 = '0'-1;
            }
            s3 = '0';
        }
        s2 = '0';
    }
}