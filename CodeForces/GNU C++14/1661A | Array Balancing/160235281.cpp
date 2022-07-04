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
long long sum=0,x,y;
cin>>n;
long long arr[n],arr2[n];
for(int i=0;i<n;i++){
   cin>>arr[i];
        }
for(int i=0;i<n;i++){
   cin>>arr2[i];
        }
for(int i=1;i<n;i++){
   x=abs(arr[i-1]-arr[i])+abs(arr2[i-1]-arr2[i]);
   y=abs(arr[i-1]-arr2[i])+abs(arr2[i-1]-arr[i]);
 
   sum+=min(x,y);
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