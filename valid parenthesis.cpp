#include<bits/stdc++.h>
	using namespace std;

	void solve(){
	   string s;
	   cin>>s;

	   stack<char>st;
	   for(auto ch:s)
	   {
          if(!st.empty() and st.top()=='(' and ch==')')st.pop();
          else st.push(ch);
	   }
	   cout<<st.size()<<endl;
	}

	int main(){
	  ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);

	  int t=1;
	  cin>>t;
	  for(int i=0;i<t;i++){
	    solve();
	  }
	}
