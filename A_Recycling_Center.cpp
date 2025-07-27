#include<bits/stdc++.h>
using namespace std;

void doubleIt(vector<int> &arr,int idx){
    for(int i=0;i<=idx;++i){
        arr[i] *= 2;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;

        int baseCount = 0;

        vector<int> arr(n);
        for(int i=0;i<n;++i) cin>>arr[i];

        sort(arr.begin(),arr.end());

        int i = n-1;
        while(i>=0 && arr[i]>c){
            i--;
            baseCount++;
        }

        arr.resize(i+1);
        arr.shrink_to_fit();

        for(int i=arr.size()-1;i>=0;--i){
            if(arr[i]>c){
                baseCount++;
                continue;
            }
            doubleIt(arr,i-1);
        }

        cout<<baseCount<<"\n";
    }
    return 0;
}