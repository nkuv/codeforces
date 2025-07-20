#include<bits/stdc++.h>
using namespace std;

bool contains(string &x,string &s){
    if(x.length()<s.length()) return false;

    for(int i=0;i<x.length()-s.length()+1;++i){
        if(x.substr(i,s.length())==s){
            return true;
        }
    }

    return false;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int xLen;
        int sLen;
        cin>>xLen>>sLen;
        string x;
        string s;
        cin>>x>>s;

        string x1 = x + x;
        string x2 = x1 + x1;
        string x3 = x2 + x2;
        string x4 = x3 + x3;
        string x5 = x4 + x4;

        int count = -1;
        if(contains(x,s)){
            count = 0;
        }
        else if(contains(x1,s)){
            count = 1;
        }
        else if(contains(x2,s)){
            count = 2;
        }
        else if(contains(x3,s)){
            count = 3;
        }
        else if(contains(x4,s)){
            count = 4;
        }
        else if(contains(x5,s)){
            count = 5;
        }

        cout<<count<<"\n";
    }
    return 0;
}