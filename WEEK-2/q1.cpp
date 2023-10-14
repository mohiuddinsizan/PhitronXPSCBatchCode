#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s1;cin>>s1;
        int interval;cin>>interval;
        int hour = stoi(s1.substr(0,2));
        int minute = stoi(s1.substr(3,2));
        int hc = hour;
        int mc = minute;
        int counter = (1440)/interval;
        int answer = 0;
        for(;;){
            int hour_extender = (interval)/60;
            int minute_extender = (interval%60);
            hour = (hour + (hour_extender + ((minute+minute_extender)/60)))%24;
            minute = (minute+minute_extender)%60;
            string hour_checker = to_string(hour);
            string minute_checker = to_string(minute);
            if(hour_checker.size()==1) hour_checker = '0'+hour_checker;
            if(minute_checker.size()==1) minute_checker = '0'+minute_checker;
            if(hour_checker[0] == minute_checker[1] && hour_checker[1] == minute_checker[0]) answer++;
            if(hour == hc && minute == mc) break;
        }
        cout<<answer<<endl;
    }

    return 0;
}
