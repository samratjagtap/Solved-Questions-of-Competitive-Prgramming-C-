#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);

    int k=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        k^=arr[i];
    }
    cout<<k<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>> t;
    while(t--)
        solve();
}
