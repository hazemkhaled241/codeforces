#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
long long n,maxm=0,maxm2=0,l,r,counter=1;
bool f=false,two=true;
 
 
cin>>n;
long long arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr, arr + n);
for(int i=1;i<n;i++){
    if(arr[i-1]!=arr[i])
        counter++;
}
for(int i=1;i<=n;i++){
    if(i>counter)
        counter++;
    cout<<counter<<" ";
}
cout<<endl;
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