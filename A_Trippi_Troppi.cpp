#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        string s;
        getline(cin,s);
        string ans;
        ans.push_back(s[0]);
        for(int i=1;i<s.length();++i){
            if(s[i]==' ' && i+1<s.length()){
                ans.push_back(s[i+1]);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}