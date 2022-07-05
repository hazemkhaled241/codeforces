#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
int n,maxm=0,maxm2=0;
bool f=false,two=true;
 
 
cin>>n;
int arr[n];
int arr2[n];
 
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    cin>>arr2[i];
}
 
for(int j=0;j<n;j++){
    if(arr[j]<arr2[j])
        swap(arr[j],arr2[j]);
}
 for(int j=0;j<n;j++){
 
    if(arr[j]>maxm)
        maxm=arr[j];
    if(arr2[j]>maxm2)
        maxm2=arr2[j];
 
}
 
cout<<(int)(maxm*maxm2)<<endl;
 
 
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
 
 
 
 
 
 
 
 