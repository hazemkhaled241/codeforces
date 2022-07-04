#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,k,counter;
    counter=0;
    cin>>n>>k;
 
 
if(n%2==0){
     if(k<=n/2)
   cout<<(k*2)-1;
 
     else if(k>n/2)
        cout<<2*(k-(n/2));
                  }
     if(n%2==1){
        if(k<=n/2)
          cout<<(k*2)-1;
        else if(k==n/2+1)
            cout<<n;
        else if(k>n/2&&k!=n/2+1)
            cout<<2*(k-(n/2+1));
 
     }
 
 
    return 0;
}