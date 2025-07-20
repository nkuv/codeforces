#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        unordered_map<int,int> map;
        for(int i=0;i<k;++i){
            int curr;
            cin>>curr;
            map[curr]++;
        }
        if(map.size()>2){
            cout<<"No"<<"\n";
        }
        else if(map.size()==1){
            cout<<"Yes"<<"\n";
            break;
        }
        else{
            vector<int> vals;
            for(const auto &[key,value]:map){
                vals.push_back(value);
            }
            if(abs(vals[0]-vals[1])>=2){
                cout<<"No"<<"\n";
            }
            else{
                cout<<"Yes"<<"\n";
            }
        } 
    }
    return 0;
}