#include <bits/stdc++.h>
using namespace std ;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
signed main(){
    IOS
    int t;
     cin>>t;
     while(t--){
       int q;
       cin>>q;
       vector<int > v;
       while(q--){
           string s;
           cin>>s;
           if(s=="add"){
               int x;
               cin>>x;
               v.push_back(x);
               
           }
           else if ( s=="remove"){
               if(v.size()>0){
                   v.pop_back();
               }
           }
           else if (s=="print"){
               int x;
               cin>>x;
               if(v.size()>x){
                   cout<<v[x]<<endl;
                   
               }
               else {
                   cout<<"0"<<endl;
               }
           }
           else {
               v.clear();
           }
       }
     }
}
