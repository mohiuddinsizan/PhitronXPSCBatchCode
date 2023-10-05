#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[26][26][26];
            for (int i = 0; i < 26; i++)
            {
                for (int j = 0; j < 26; j++)
                {
                    for (int k = 0; k < 26; k++)
                    {
                        arr[i][j][k] = 0;
                    }
                }
            }
        cin.ignore();
        vector<string>s3[3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s ;cin>>s;
                s3[i].push_back(s);
                arr[s[0]-'a'][s[1]-'a'][s[2]-'a']++;
            }
        }
        int sum = 0;
        for (int m = 0; m < 3; m++)
        {
            for(int i = 0;i<n;i++){
                string h = s3[m][i];
                if(arr[h[0]-'a'][h[1]-'a'][h[2]-'a'] == 3) sum+=0;
                if(arr[h[0]-'a'][h[1]-'a'][h[2]-'a'] == 2) sum+=1;
                if(arr[h[0]-'a'][h[1]-'a'][h[2]-'a'] == 1) sum+=3;
            }
            cout<<sum<<" ";
            sum = 0;
        }
        cout<<endl;
    }

    return 0;
}