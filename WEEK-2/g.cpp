#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;cin>>s;
    int counter = 0;
    string q = s;
    while(s.length()>1){

        int sum = 0;
        for(char ch : q){
            sum+=(ch-'0');
        }
        counter++;
        if(sum<10) break;
        q = to_string(sum);
    }
    cout<<counter;

    return 0;
}