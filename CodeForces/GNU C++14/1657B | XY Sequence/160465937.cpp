#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
long long n,b,x,y,sum=0,temp;
cin>>n>>b>>x>>y;
long long arr[n+1];
arr[0]=0;
for(int i=1;i<n+1;i++){
temp=arr[i-1]+x;
if(temp<=b){
    arr[i]=temp;
   sum+=arr[i];}
else{
    arr[i]=arr[i-1]-y;
    sum+=arr[i];
}
        }
cout<<sum<<endl;
 
 
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