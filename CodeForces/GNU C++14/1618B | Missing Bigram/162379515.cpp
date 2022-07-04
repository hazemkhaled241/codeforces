#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
long long n,num,maxm=0,minm=10e9;
bool f=true,two=true;
 
cin>>n;
string arr[n-2];
 
if(n==3){
    cin>>arr[0];
    cout<<arr[0]<<'a'<<endl;
    return;
}
 
for(int i=0;i<n-2;i++){
    cin>>arr[i];
if(i==0){
    cout<<arr[i];
    }
else if(i>=1&&i!=n-3){
   if(arr[i-1][1]==arr[i][0])
    cout<<arr[i][1];
   else{
    cout<<arr[i];
    f=false;
    }
 
    }
else{
    if(!f)
      cout<<arr[i][1];
    else if(arr[i-1][1]==arr[i][0])
      cout<<arr[i][1]<<arr[i][1];
    else
      cout<<arr[i];
 
}
 
 
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
 
 
 
 
 
 
 
 