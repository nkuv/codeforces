#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> coins = {1,3,6,10,15};
    vector<int> dp(75,1e9);
    dp[0] = 0;
    for(int i=1;i<=74;++i){
        for(int coin:coins){
            if(i>=coin){
                dp[i] = min(dp[i],dp[i-coin] + 1);
            }
        }
    }
    while(t--){
        int n;
        cin>>n;
        
        int quotient = n/15;
        int rem = n%15;
        int ans = 1e9;
        for(int take=0;take<=4 && quotient-take>=0;++take){
            ans = min(ans,(quotient-take) + dp[15*take + rem]);
        }
        cout<<ans<<"\n";;
    }
    return 0;
}