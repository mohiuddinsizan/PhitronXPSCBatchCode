#include<bits/stdc++.h>
using namespace std;
int main(){

    string s1,s2;
    cin>>s1>>s2;
    int counter = 0;
    for(int i = 0;i<s2.length();i++){
        if(s1[i]!=s2[i]) counter++;
    }
    cout<<counter;
    return 0;
}