#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, ans, i;
    ll f[1001];
    
    f[0]=1;
    
    for(i=1; i<=1000; i++)
    {
        f[i]=(f[i-1]*i)%mod;
    }
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        
        if((n%2)==1){
            cout<<"0\n";
        }else{
            n=n/2;
            
            ans=(f[n]*f[n])%mod;
            
            cout<<ans<<"\n";
        }
        
    }
}