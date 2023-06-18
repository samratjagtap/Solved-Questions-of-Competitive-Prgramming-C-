#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long q,n;
    cin>>q>>n;
    if(q == 1){
        bool perf_sqr = 0;
        for(int i=1; i*i<=n; i++){
            if(i*i == n){
                perf_sqr = 1;
            }
        }
        if(perf_sqr){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }else{
        bool perf_cube = 0;
        for(int i=1; i*i*i<=n; i++){
            if(i*i*i == n){
                perf_cube = 1;
            }
        }
        if(perf_cube){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int _t;cin>>_t;while(_t--)    
    solve();
    return 0;
}
