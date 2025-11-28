#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<pair<int,int>> getFactorPairs(int x){
    x = abs(x);
    vector<pair<int,int>> ans;
    ans.emplace_back(1,x);
    for(int i=2;i*i<=x;++i){
        if(x%i==0){
            ans.emplace_back(i,x/i);
        }
    }
    return ans;
}

int main(){
    int n,m,q;
    cin>>n>>m>>q;

    vector<int> a(n),b(m);
    unordered_map<ll,int> U,V;
    ll A = 0;
    ll B = 0;

    for(int i=0;i<n;++i){
        cin>>a[i];
        A+=a[i];
        U[a[i]]++;
    }

    for(int i=0;i<m;++i){
        cin>>b[i];
        B+=b[i];
        V[b[i]]++;
    }

    while(q--){
        int x;
        cin>>x;
        bool found = false;

        vector<pair<int,int>> pairs = getFactorPairs(x);

        for(auto [f1,f2]:pairs){
            vector<pair<ll,ll>> candidates;
            if(x>=0){
                candidates = {{f1,f2},{-f1,-f2},{f2,f1},{-f2,-f1}};
            } else {
                candidates = {{f1,-f2},{f2,-f1},{-f1,f2},{-f2,f1}};
            }

            for(auto [c1,c2]:candidates){
                if(U[A-c1]>0 && V[B-c2]){
                    found = true;
                    break;
                }
            }
            if(found) break;
        }

        cout << (found? "YES\n":"NO\n");
    }

    return 0;
}