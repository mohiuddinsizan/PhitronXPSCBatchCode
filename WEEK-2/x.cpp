#include<bits/stdc++.h>
using namespace std;
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;cin>>t;
    cin.ignore();
    while(t--){
        char arr[8][8];
        for(int k = 0;k<8;k++){
            //cout<<k;
            for(int m = 0;m<8;m++){
                //cout<<" "<<m<<endl;
                cin>>arr[k][m];
                //cin.ignore();
            }
        }
        bool flag = true;
        for(int i = 1;i<8-1;i++){
            //cout<<"hello"<<endl;
            for(int j = 1;j<8-1;j++){
                //cout<<"t "<<t<<" j "<<j<<endl<<endl;
                //cout<<arr[i][j]<<arr[i-1][j-1]<<arr[i+1][j+1]<<arr[i+1][j-1]<<arr[i-1][j+1]<<endl;
                if(arr[i][j]=='#' && arr[i-1][j-1]=='#' && arr[i+1][j+1]=='#' && arr[i+1][j-1]=='#' && arr[i-1][j+1]=='#')
                {
                    cout<<i+1<<" "<<j+1<<endl;
                    flag = false;
                    break;
                }
            }
            if(!flag) break;
            
        }
    }

    return 0;
}