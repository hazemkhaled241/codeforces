#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
long long n,x,y,q,counter=0,result=0;
bool f=false,two=true;
 
 
cin>>n>>q;
long long arr[n];
long long t[n];
 
for(int i=0;i<n;i++){
    cin>>arr[i];
}
 sort(arr, arr + n, greater<long long>());
 t[0]=arr[0];
for(long long i=1;i<n;i++){
    t[i]=t[i-1]+arr[i];
}
 
 
 for(long long j=0;j<q;j++){
   cin>>x>>y;
   if(x==1){
    cout<<arr[0]<<endl;
}
else{
   long long z=x-y-1;
if(z>=0)
 cout<<t[x-1]-t[z]<<endl;
else
 cout<<t[x-1]<<endl;   
 }
 }
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
int main()
{
 
 int t;
 
   //cin>>t;
   // for(int i=0;i<t;i++){
 
   lucky();
   // }
 
    return 0;
}
 
 
 
 
 
 
 
 