#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    while(a--){
        int n,k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0;i<n;++i){
            cin >> arr[i];
        }
        if(is_sorted(arr.begin(),arr.end())){
            cout << "YES" << "\n";
        } 
        else if(k==1){
            cout << "NO" << "\n";
        }
        else{
            cout << "YES" << "\n";
        }
    }
    return 0;
}
