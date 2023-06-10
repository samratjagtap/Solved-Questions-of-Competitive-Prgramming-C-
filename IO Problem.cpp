#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,y,z;
    string m;
    cin>>n>>m;
    
    int i=0;
    for(i;i<m.length();i++)
    {
        if(m[i]=='.')
            break;
    }
    
    y=stoi(m.substr(0,i));
    z=stoi(m.substr(i+1));
    
    cout<<z+n<<'.'<<y+n<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
   
    int _t;cin>>_t;while(_t--)
    solve();
}
