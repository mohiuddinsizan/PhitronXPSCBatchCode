//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long long maximumSumSubarray(int K, vector<int> &Arr , int N){
        
        // code here
        long long sum = 0;
        for(int i = 0;i<K;i++){
            sum+=Arr[i];
        }
        long long ma_x = sum;
        int j = 0;
        for(int i = K;i<N;i++){
            sum=sum+Arr[i]-Arr[j];
            if(sum>ma_x) ma_x = sum;
            j++;
        }
        return ma_x;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 