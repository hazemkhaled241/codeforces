#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
 
string lucky(){
int n,dif0=-1;
bool flag=false,b=true;
cin>>n;
int arr1[n];
int arr2[n];
for(int i=0;i<n;i++){
    cin>>arr1[i];
 
}
int dif;
for(int i=0;i<n;i++){
    cin>>arr2[i];
    if(arr2[i]>arr1[i])
        flag=true;
     if(arr2[i]==0){
        if(dif0<arr1[i]-arr2[i])
             dif0=arr1[i]-arr2[i];
 
     }
     if(b&&arr2[i]!=0){
            dif=arr1[i]-arr2[i];
            b=false;
            }
 
}
if(b)
    dif=dif0;
//cout<<dif<<endl;
if(n==1&&arr1[0]>=arr2[0])
  return "YES";
else if(n==1)
   return "NO";
 
if(flag)
    return "NO";
 
for(int i=0;i<n;i++){
 
       if(arr2[i]==0&&dif0>dif)
         return "NO";
 
     if(arr1[i]-arr2[i]!=dif&&arr2[i]!=0)
           return "NO";
 
 
}
return "YES";
}
int main()
{
 
  int t;
 
   cin>>t;
    for(int i=0;i<t;i++){
 
    cout<<lucky()<<endl;
    }
 
 
 
    return 0;
}
 
 
 
 