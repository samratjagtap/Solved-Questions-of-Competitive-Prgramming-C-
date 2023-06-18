#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin>>n;
    int c=0;
    int d=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i*i!=n)
        {
            c++;
        }
        else if(i*i==n)
        {
            d++;
        }
        }
    }
    cout<<(2*c)+d<<"\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}
