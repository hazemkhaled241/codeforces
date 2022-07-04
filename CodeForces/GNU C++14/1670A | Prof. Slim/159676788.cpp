#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
 
 
int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int n; 
        cin>>n;
        vector<ll> v(n);
        int neg = 0;
        for(int i = 0; i<n; i++){
            ll x;
            cin>>x;
            if(x < 0) neg++;
            v[i] = abs(x);
        }
        if(n == 1) {
            py; continue;
        }
        for(int i = 0; i < n && neg > 0; i++){
            ll x = abs(v[i]);
            v[i] = (-1* 1ll * x);
            neg--;
        }
        
        bool flag = true;
        for(int i = 1; i<n ;i++){
            if(v[i] < v[i - 1]) {
                flag = false; break;
            }
        }
        
        if(flag){
            py;
        }
        else pn;
        
    }
 
    return 0;
}