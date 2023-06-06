#include <bits/stdc++.h>
using namespace std;

int solve(){
	int a,b,i;
	cin>>a>>b;
	a=(a+b)-(b=a);
	cout<<a<<" "<<b<<"\n";

}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	int _t;cin>>_t;while(_t--)
	solve();
}
