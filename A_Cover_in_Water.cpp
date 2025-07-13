#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int len;
        string s;
        cin>>len;
        cin>>s;
        int dotCount = 0;
        bool hasTriple = false;
        int consec = 0;
        for(int i=0;i<s.length();++i){
            if(s[i]=='#'){
                consec = 0;
            }
            else{
                consec++;
                dotCount++;
            }
            if(consec == 3){
                hasTriple = true;
            }
        }
        if(hasTriple){
            cout<<2<<"\n";
        }
        else{
            cout<<dotCount<<"\n";
        }
    }
}