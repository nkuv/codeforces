#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<char>> board(10,vector<char>(10));
        for(int i=0;i<10;++i){
            for(int j=0;j<10;++j){
                cin>>board[i][j];
            }
        }

        int sum = 0;
        for(int i=0;i<10;++i){
            for(int j=0;j<10;++j){
                if(board[i][j]=='X'){
                    int ring = 1 + min({i, j, 9 - i, 9 - j});
                    sum += ring;
                }
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}