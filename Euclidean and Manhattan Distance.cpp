#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'


int binexp(int a, int n){
	if(n==0){
		return 1;
	}

	int ans = 1;
	while(n){
		if(n%2){
			ans = ans * a;
		}
		a = a*a;
		n>>=1;
	}
	return ans;
}

signed main(){

	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

	int T;
	cin>>T;
	while(T--){
		double x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;

		double ans1=0, ans2=0;

		ans1 = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
		ans2 = abs(x2-x1) + abs(y2-y1);

		cout<<fixed<<setprecision(7);

		cout<<ans1<<" "<<ans2<<endl;
	}
	return 0;
}
