#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
long long n,red=0,blue=0,mid;
bool f=false,two=true;
 
 
cin>>n;
if(n%2==0)
  mid=(n/2)-1;
else
  mid=n/2;
long long arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
if(i>0&&arr[i]!=arr[i-1])
 f=true;
 
}
if(!f){
  cout<<"NO"<<endl;
  return;
  }
 
  sort(arr, arr + n,greater<long long>());
 
  blue=arr[n-1];
long long counter=0;
for(int i=n-2;i>0;i--){
 red+=arr[counter];
 blue+=arr[i];
if(counter<mid){
    if(red>blue){
        cout<<"YES"<<endl;
        return;
    }
}
 
else
    break;
counter++;
}
 
   cout<<"NO"<<endl;
 
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
 
 
 
 
 
 
 
 