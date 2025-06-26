#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,count=0;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        for(char c:s){
            if(c=='+') count++;
            if(c=='-') count--;
        }
    }
    cout<<count/2;
}