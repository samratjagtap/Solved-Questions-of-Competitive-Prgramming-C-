#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    string s;
    cin>>s;
    int q;
    cin>>q;
    while(q--)
    {
        string command;
        cin>>command;
        if(command=="print")
        {
            int a,b;
            cin>>a>>b;
            cout<<s.substr(a,b-a+1)<<endl;
        }
        else if(command=="reverse")
        {
            int a,b;
            cin>>a>>b;
            reverse(s.begin()+a, s.begin()+b+1);
        }
        else if(command=="replace")
        {
            int a,b;
            cin>>a>>b;
            string p;
            cin>>p;
            int j=0;
            for(int i=a;i<=b;i++)
            {
                s[i]=p[j];
                j++;
            }
        }
        else if(command=="rotate")
        {
            int k;
            cin>>k;
            string s1,s2;
            
            s1=s.substr(0,s.size()-k);
            s2=s.substr(s.size()-k,k);
            s=s2+s1;
        }
    }
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
