#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;cin>>n;
    int k;cin>>k;
    int counter = 0;
    while(true){
        if(n/k > 0 ){
            n = n/k;
            counter++;
        }
        else break;
    }    
    cout<<counter+1<<endl;

    return 0;
}