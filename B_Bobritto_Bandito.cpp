#include<bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    while (k--) {
        int m,n,l,r;
        cin>>m>>n>>l>>r;
        int left = 0;
        int right = 0;
        for(int i=1;i<=n;++i){
            if(i%2==0){
                if(right<r){
                    right++;
                }
                else{
                    left--;
                }
            }
            else{
                if(left>l){
                    left--;
                }
                else{
                    right++;
                }
            }
        }
        cout<<left<<" "<<right<<"\n";

    }
    return 0;
}