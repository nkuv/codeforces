#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        vector<int> arr;
        for(int i=0;i<k;++i){
            int curr;
            cin>>curr;
            arr.push_back(curr);
        }
        if(arr[0]!=1){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}