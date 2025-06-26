#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin>>n>>k;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }

    int valK = arr[k-1];
    int count = 0;
    for(int i:arr){
        if(i>0 && i>=valK) count++;
    }

    cout<<count;
    return 0;
}