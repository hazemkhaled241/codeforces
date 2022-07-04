#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
long long n,result=0,index,maxm=0,maxm2=0;
bool f=true,two=true;
 
cin>>n;
long long arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
if(arr[i]>maxm){
    maxm=arr[i];
    index=i;}
}
 
for(int i=0;i<n;i++){
  if(arr[i]>maxm2&&i!=index)
     maxm2=arr[i];
 
}
 
 
cout<<(long long)(maxm+maxm2)<<endl;
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
 
 
 
 
 
 
 
 