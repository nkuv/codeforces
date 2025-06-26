#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        string s,ans;
        cin>>s;
        vector<int> count(10,0);
        for(char c:s){
            count[c-'0']++;
        }
        for(int i=1;i<=10;++i){
            int minimum = 10 - i;
            for(int j=minimum;j<=9;++j){
                if(count[j]>0){
                    ans += to_string(j);
                    count[j]--;
                    break;
                }
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}