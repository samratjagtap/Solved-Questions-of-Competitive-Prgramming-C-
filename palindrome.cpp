#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){

    string s;string temp="";
    getline(cin,s);

    for(int i=0;i<s.length();i++){

        if(s[i]>=97 && s[i]<=122){
            temp+=s[i];
        }

    }

    string orig=temp;

    reverse(temp.begin(),temp.end());

    if(orig==temp){
        cout<<"\nYES";


    }

    else
        cout<<"\nNO";

}






int main(){
    
   

    int t;
    cin>>t;

    string s;
    getline(cin,s);

    while(t--){
        solve();

    }


    }
