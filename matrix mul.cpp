#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
# define M_PI  3.14159265358979323846
void solve()
{
    int n,m,p;
    cin>>n>>m>>p;
    int a[n][m];
    int b[m][p];
    int c[n][p];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        cin>>b[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        c[i][j]=0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            for(int k=0;k<m;k++)
            c[i][j]+=a[i][k]*b[k][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        cout<<c[i][j]<<" ";
        cout<<endl;
    }
}
signed main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int t;cin>>t;while(t--)
solve();

}
