#include <bits/stdc++.h>
using namespace std;

void solve(){
	int q;cin>>q;
	int n;
	string s;
	queue<int> st;
	while(q--){
		cin>>s;
		if (s=="add")
		{
			cin>>n;
			st.push(n);
		}
		else if (s=="remove")
		{	
			if (!st.empty())
			{
				st.pop();
			}
			
		}
		else if (s=="print")
		{
			if (st.empty())
			{
				cout<<"0"<<endl;
			}
			else{
				cout<<st.front()<<endl;
			}

		}
	}	

 }
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	int _t;cin>>_t;while(_t--)
	solve();
}
