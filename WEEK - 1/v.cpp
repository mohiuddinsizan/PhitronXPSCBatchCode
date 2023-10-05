#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int counter = 0;
	while(n--){
		int x;cin>>x;
		if(x%k==0)counter++;
	}
	cout<<counter<<endl;
	return 0;
}