#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
long long n,result=1,minm=10e9,zero=0,counter=0,c=0;
bool f=false,two=true;
 
 
cin>>n;
long long arr[n];
 
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==0)
        counter++;
}
for(int i=0;i<n;i++){
        if(i!=n-1&&arr[i]!=0&&arr[i+1]==0){
            c+=1;
            }
}
 
if(counter==n)
   cout<<0<<endl;
 else if(counter==0||c==0 ||(c==1&& arr[n-1]==0))
    cout<<1<<endl;
 else
    cout<<2<<endl;
 
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
 
 
 
 
 
 
 
 