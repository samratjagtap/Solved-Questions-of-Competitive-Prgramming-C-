#include <bits/stdc++.h>

using namespace std;


int main()
{   
   
   int t; 
   cin>>t;
   string s;
   getline(cin,s);
   
   while(t--)
   {
       getline(cin,s);
       
       for(int i=0; i<s.length(); i++)
       {
           if(s[i]>=97 && s[i]<=122)
           {
               s[i] = s[i] - 'a' +'A' ;
           }
           
           else if(s[i]>=65 && s[i] <=90)
           {
               s[i] = s[i] - 'A' + 'a' ;
           }
       }
       
      cout<<s<<endl;
     
       
   }
   
   
}
