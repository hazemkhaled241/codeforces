#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
 
int n,counter=0,sum=0;
cin>>n;
int arr[n];
int temp[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
    temp[i]=arr[i];
  }
 
  for(int i=0;i<n;i++){
        counter=0;
    for(int j=0;j<n;j++){
        if(arr[i]==temp[j]){
           counter++;
           temp[j]=-1;
           }
    }
    if(counter>1){
     counter--;
    sum+=counter;}
  }
 
if(sum%2==0)
cout<<n-sum<<endl;
else
cout<<n-(sum+1)<<endl;
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