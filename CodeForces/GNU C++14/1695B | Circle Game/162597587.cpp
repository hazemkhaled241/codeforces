#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
long long n,result=1,minm=10e9,index;
bool f=false,two=true;
 
 
cin>>n;
long long arr[n];
 
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]<minm){
        minm=arr[i];
        index=i;
        }
}
 
if(index%2==0&&n%2==0)
   cout<<"Joe"<<endl;
else
   cout<<"Mike"<<endl;
 
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
 
 
 
 
 
 
 
 