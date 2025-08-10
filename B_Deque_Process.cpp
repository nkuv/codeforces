#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> arr(n);
        for(int i=0;i<n;++i) cin>>arr[i];

        bool hasFive = false;
        int start = 0;
        int end = 0;
        
        int i = 0;
        while(i<n){
            int j = i+1;
            while(j<n && arr[j-1]<arr[j]){
                j++;
                if(j-i+1 == 5) hasFive=true;
            }
            i++;
        }
        while(i<n){
            int j = i+1;
            while(j<n && arr[j-1]>arr[j]){
                j++;
                if(j-i+1 == 5) hasFive=true;
            }
            i++;
        }

        string res = "";
        if(!hasFive){
            for(int i:arr){
                res += 'L';
            }
            cout<<res<<"\n";
            continue;
        }
        
        
    }
    return 0;
}