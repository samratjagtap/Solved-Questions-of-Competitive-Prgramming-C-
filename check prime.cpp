#include<bits/stdc++.h>

using namespace std;

void solve()
{
 long long n;
 cin>>n;
 long long i;
 for( i=2;(i*i)<=n;i++)
 {
     
     if(n%i==0)
     {
         cout<<"NO"<<'\n';
         return;
     }
 }
 if(n==1)
 {
    cout<<"NO"<<'\n';  
 }
 else 
 {
     cout<<"YES"<<'\n';
 }
}
 signed main ()
 {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t ; cin>> t; while( t--)
    solve();
 }
