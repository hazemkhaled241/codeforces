#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
long long n,minm=10e9,maxm=0,minIndex,maxIndex;
cin>>n;
long long arr[n];
for(int i=0;i<n;i++){
        cin>>arr[i];
    if(arr[i]<minm){
        minm=arr[i];
        minIndex=i;
    }
    if(arr[i]>maxm){
        maxm=arr[i];
        maxIndex=i;
    }
 
 
}
cout<<minIndex+1<<" "<<maxIndex+1<<endl;
 
 
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
 
 
 
 
 
 
 
 