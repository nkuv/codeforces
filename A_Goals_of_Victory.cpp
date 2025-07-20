#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n-1);
        for(int i=0;i<n-1;++i){
            cin>>arr[i];
        }

        int sum = 0;
        for(int eff:arr) sum+=eff;
        cout<<-sum<<"\n";
    }
    return 0;
}