#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
void solve()
{   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int dif=a[1]-a[0];
    int ans=2;
    int curl=2;
    for(int i=2;i<n;i++){
        if(a[i]-a[i-1]==dif){
            curl++;
            ans=max(ans,curl);
        }else{
            dif=a[i]-a[i-1];
            curl=2;
        }
    }
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int _t;
    
    cin>>_t;

    while(_t--)
    {
        solve();
    }
}
