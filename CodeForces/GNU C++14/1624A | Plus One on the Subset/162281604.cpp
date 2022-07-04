#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
long long n,num,maxm=0,minm=10e9;
bool f=true,two=true;
 
cin>>n;
long long arr[n];
 
 
for(int i=0;i<n;i++){
    cin>>arr[i];
if(arr[i]>maxm){
    maxm=arr[i];
    }
if(arr[i]<minm){
    minm=arr[i];
    }
}
 
 
   cout<<(long long)maxm-minm<<endl;
 
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
 
 
 
 
 
 
 
 