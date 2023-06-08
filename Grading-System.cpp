#include <bits/stdc++.h>
using namespace std;

int solve(){
	int M,F,R;
	cin>>M>>F>>R;
	int S = M+F;

	if (M==-1 || F==-1)
	{
		cout<<"F"<<"\n";

	}

	else if (S>=80 && S<=100){
		cout<<"A"<<"\n";
	}
	else if (S>=65 && S<80){
		cout<<"B"<<"\n";
	}
	else if (S>=50 && S<65){
		cout<<"C"<<"\n";
	}
	else if (S>=30 && S<50){
		if(R>=50){
			cout<<"C"<<"\n";
		}
		else
		cout<<"D"<<"\n";

	}
	else if (S<30){
		cout<<"F"<<"\n";
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	int _t;cin>>_t;while(_t--)
	solve();
}
