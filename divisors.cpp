#include<bits/stdc++.h>
using namespace std;
#define int long long
using ii=pair<int,int>;
#define F first
#define S second
int p=1e9+7;

void solve()
{
    int n;
    cin>>n;
    set<int> s;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            s.insert(i);
            s.insert(n/i);
        }
    }
    for(auto v:s)
        cout<<v<<" ";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--)
        solve();
}
