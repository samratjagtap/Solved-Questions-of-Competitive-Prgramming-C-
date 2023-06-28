#include <bits/stdc++.h>
using namespace std;

int solve(){
	const unsigned int M = 1000000007;
	long long int q;
	long long int prod = 1;
	cin>>q;
	int arr[q];
	for(long long int i=0; i<q;i++){
		cin>>arr[i];
		prod=(arr[i]*prod)%M;
	}
	cout<<prod<<endl;
 }
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	int _t;cin>>_t;while(_t--)
	solve();
}
