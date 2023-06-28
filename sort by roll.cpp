#include<bits/stdc++.h>
using namespace std;
#define mod 1000007
signed main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        map<int,string> mp;
        while(n--){
            string s; int x;
            cin>>s>>x;
            mp[x]=s;
        }
        for(auto it:mp)
        {
            cout<<it.second<<" "<<it.first<<"\n";

        }
    }
}
