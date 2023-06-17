#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long int n;
	cin>>n;
	long long int arr[n];
	long long int temp=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	for (int j = 0; j <n-1; ++j)
	{
		if (arr[j+1]<arr[j])
		{
			temp += arr[j]-arr[j+1];
			arr[j+1]=arr[j];
			  
		}
		else{
			
			continue;
		}
	}
	cout<<temp<<endl;

 }
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	int _t;cin>>_t;while(_t--)
	solve();
}
