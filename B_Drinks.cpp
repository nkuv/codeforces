#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }

    int sum = 0;
    for(int i:arr){
        sum+=i;
    }

    double ans = (double)sum/n;
    cout<<ans<<"\n";
    return 0;
}