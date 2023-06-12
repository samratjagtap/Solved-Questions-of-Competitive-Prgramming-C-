#include<bits/stdc++.h>
using namespace std;

void print_cell (int i, int j){
    if(i%3 == 0 || j%3 == 0){
        cout << "*";
    }
    else {
        cout << ".";
    }

}


void print_row(int i,int m){
    for(int j=0;j<(3*m+1);j++){
        print_cell(i,j);
    }
    cout << "\n";

}


void solve(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<(3*n+1);i++){
        print_row(i,m);
    }

}

signed main (){
    ios_base:: sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
}
