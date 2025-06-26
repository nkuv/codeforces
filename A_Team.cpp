#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,ans=0;
    cin>>n;
    while(n--){
        int p1,p2,p3;
        cin>>p1>>p2>>p3;
        if(p1+p2+p3>=2){
            ans++;
        }
    }

    cout << ans << "\n";
    return 0;
}