#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
 
int n,m,sum=0;
cin>>n>>m;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
 
}
for(int i=0;i<n;i++){
    if(arr[i]<=m)
        m=m-arr[i];
    else{
        sum=sum+(arr[i]-m);
        m=0;
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