#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio;
    cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n-1];
        int c[n-2];
        int sum1 = 0,sum2=0,sum3=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum1+=a[i];
    }
        for(int i=0;i<n-1;i++){
            cin>>b[i];
            sum2+=b[i];
    }

        for(int i=0;i<n-2;i++){
            cin>>c[i];
            sum3+=c[i];
    }
    cout<<sum1-sum2<<" "<<sum2-sum3<<"\n";

    }
}
