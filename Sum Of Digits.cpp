#include <bits/stdc++.h>
using namespace std;

int solve(){
	string num;
	cin>>num;
	int sum = 0;
	for (int i = 0; i < num.length(); i++)
	{
		sum+=num[i]-'0';
	}
	cout<<sum<<endl;

 }
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	int _t;cin>>_t;while(_t--)
	solve();
}
