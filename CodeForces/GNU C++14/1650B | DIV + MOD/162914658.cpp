#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
long long n,maxm=0,maxm2=0,l,r,a;
bool f=false,two=true;
 
 
cin>>l>>r>>a;
 
if(a==r&&a==l)
    cout<<1<<endl;
else if(a==r)
    cout<<r-1<<endl;
else if(a>r)
    cout<<r<<endl;
else if(r==l&&r!=a)
  cout<<(long long)((r/a)+(r%a))<<endl;
else if(a>l&&a<r){
 int c1=(((r)/a)-1+(a-1));
 int c2=(((r)/a)+((r)%a));
  cout<<max(c1,c2)<<endl;
    }
else{
   if(r-(r%a+1)<l){
              for(long long i=r;i>=l;i--){
        if(i%a!=0){
            cout<<(i/a)+(i%a)<<endl;
            return;
         }
        }
        }
    else{
    int c1=(((r)/a)-1+(a-1));
    int c2=(((r)/a)+((r)%a));
       cout<<max(c1,c2)<<endl;
       return;
 
}
}
 
 }
 
int main()
{
 
 int t;
 
   cin>>t;
    for(int i=0;i<t;i++){
 
   lucky();
    }
 
    return 0;
}