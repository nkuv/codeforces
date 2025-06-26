#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s.length()>10){
            cout<<s[0]<<s.length()-2<<s.back()<<"\n";
        }
        else{
            cout<<s<<"\n";
        }
    }


    return 0;
}