#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
long long n,maxm=0,counter=0;
bool f=true,two=true;
 
cin>>n;
long long arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]>maxm&&i!=0&&i!=n-1)
        maxm=arr[i];
}
for(int i=1;i<n-1;i++){
   if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]&&i!=n-2&&arr[i+2]>=arr[i]){
        arr[i+1]=arr[i+2];
        counter++;
        }
     else if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]&&i!=n-2&&arr[i+2]<arr[i]){
        arr[i+1]=arr[i];
        counter++;        
     }   
     else if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]&&i==n-2){
        arr[i+1]=arr[i];
        counter++;
     }
 
}
cout<<counter<<endl;
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
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
 
 
 
 
 
 
 
 