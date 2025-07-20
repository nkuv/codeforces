#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    int minV = INT_MAX;
    for(int i=0;i<n;++i){
        int curr;
        cin>>curr;
        minV = min(minV,abs(curr));
    }

    cout<<minV<<"\n";
    return 0;
}