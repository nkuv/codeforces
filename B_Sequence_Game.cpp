#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> b(n);
        for(int i=0;i<n;++i){
            cin>>b[i];
        }
        vector<int> a;
        a.push_back(b.front());

        for(int i=1;i<n;++i){
            if(b[i-1]<=b[i]){
                a.push_back(b[i]);
            }
            else{
                a.push_back(b[i]);
                a.push_back(b[i]);
            }
        }

        int an = a.size();
        cout<<an<<"\n";
        for(int i:a){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}