#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int row,col;
    cin>>row>>col;

    int prod = row*col;
    int res = prod / 2;
    cout<<res;
    return 0;
}