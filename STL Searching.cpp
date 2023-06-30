#include<bits/stdc++.h>
using namespace std;
#define int long long
int m=1e9+7;
void solve()
{
	int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    while(q--)
    {
        int t,x;
        cin>>t>>x;
        if(t==1)
        {
            auto it=lower_bound(a,a+n,x);
            if(it!=(a+n))
            cout<<*it<<" ";
            else
                cout<<-1<<" ";
        }
        else if(t==2)
        {
            auto it=upper_bound(a,a+n,x);
            if(it!=(a+n))
            cout<<*it<<" ";
            else
            cout<<-1<<" ";
        }
        else if(t==3)
        {
            auto it=upper_bound(a,a+n,x);
            cout<<it-a<<" ";
        }
        else if( t==4)
        {
            auto it=lower_bound(a,a+n,x);
            cout<<it-a<<" ";
        }
    }
    cout<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
