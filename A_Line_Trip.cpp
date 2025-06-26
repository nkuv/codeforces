#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int stationCount,maxRoad;
        cin>>stationCount>>maxRoad;

        vector<int> gas;
        gas.push_back(0);
        for(int i=0;i<stationCount;++i){
            int k;
            cin>>k;
            gas.push_back(k);
        }
        gas.push_back(maxRoad);

        int newN = gas.size();
        int maxDiff = 0;
        for(int i=1;i<newN;++i){
            if(i==newN-1){
                maxDiff = max(maxDiff,2 * (gas[i] - gas[i-1]));
            }
            else{
                maxDiff = max(maxDiff,gas[i]-gas[i-1]);
            }
           
        }

        cout<<maxDiff<<"\n";

    }
    return 0;
}