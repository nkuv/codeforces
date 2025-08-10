#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int size = s.length();
    bool hasZero = false;

    for(int i=0;i<size;++i){
        if(s[i]=='0' && !hasZero){
            hasZero = true;
            s[i]='2';
            break;
        }
    }

    for(int i=0;i<size-1;++i){
        if(s[i]=='2') continue;
  
        cout<<s[i];
    }

    if(s[size-1]=='1' && hasZero){
        cout<<'1';
    }
    else if(s[size-1]=='1' && !hasZero){

    }
    else if(s[size-1]=='0' && hasZero){
        cout<<'0';
    }
    else{

    }
    cout<<"\n";
    return 0;
}