#include<bits/stdc++.h>
using namespace std;

vector<int> findMax(vector<int>& arr){
    vector<pair<int,int>> pairs(arr.size());

    for(int i=0;i<arr.size();++i){
        pairs[i].first = arr[i];
        pairs[i].second = i;
    }
    sort(pairs.rbegin(),pairs.rend());

    vector<int> idx;
    for(int i=0;i<3;++i){
        idx.push_back(pairs[i].second);
    }

    return idx;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> a(n),b(n),c(n);

        for(int i=0;i<n;++i) cin>>a[i];
        for(int i=0;i<n;++i) cin>>b[i];
        for(int i=0;i<n;++i) cin>>c[i];

        vector<int> maxA = findMax(a);
        vector<int> maxB = findMax(b);
        vector<int> maxC = findMax(c);

        int ans = 0;
        for(int i=0;i<3;++i){
            for(int j=0;j<3;++j){
                for(int k=0;k<3;++k){
                    if(maxA[i]==maxB[j] || maxA[i]==maxC[k] || maxB[j]==maxC[k]) continue;
                    ans = max(ans,a[maxA[i]]+b[maxB[j]]+c[maxC[k]]);
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}