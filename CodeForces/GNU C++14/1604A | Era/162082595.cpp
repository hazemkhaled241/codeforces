#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
long long n,num,maxm=0,index;
bool f=true,two=true;
 
cin>>n;
long long arr[n];
 
long long counter=1;
for(int i=0;i<n;i++){
    cin>>arr[i];
if(arr[i]>(counter)&&(arr[i]-counter)>maxm){
    maxm=arr[i]-counter;
 
    }
    counter++;
}
 
 
   cout<<maxm<<endl;
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
 
 