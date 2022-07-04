#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
int n;
long long maxm=0,dif=10e9,index=-1;
cin>>n;
long long arr[n];
for(int i=0;i<n;i++){
   cin>>arr[i];
   if(arr[i]>maxm){
        maxm=arr[i];
        index=i;
        }
}
if(n==1&&arr[0]!=1)
    cout<<"NO"<<endl;
else if(n==1&&arr[0]==1)
    cout<<"YES"<<endl;
else{
    for(int i=0;i<n;i++){
        if((maxm-arr[i])<dif&&i!=index)
            dif=maxm-arr[i];
 
    }
  if(dif>1)
    cout<<"NO"<<endl;
  else
    cout<<"YES"<<endl;
 
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