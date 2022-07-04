#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
long long Count(long long x){
    long long c = 0;
    while(x % 2 == 0){
        c++;
        x /= 2;
    }
 
    return c;
}
long long lucky(){
long long n,odd=0,counter=0;
long long minm=10e9,m=10e9,t1,t2,t3,t;
cin>>n;
long long arr[n];
for(long long i=0;i<n;i++){
   cin>>arr[i];
    long long l=log2(arr[i]);
   if(arr[i]%2!=0)
        odd++;
 
     else if(Count(arr[i])<m)
          m=Count(arr[i]);
 
 
 
 
//cout<<m<<endl;
 
}
 
if(odd!=0)
    return n-odd;
else{
 
return m+(n-1);
      }
 
}
int main()
{
 
  int t;
 
   cin>>t;
    for(int i=0;i<t;i++){
 
    cout<<lucky()<<endl;
    }
 
 
//cout<<Count(6)<<endl;
    return 0;
}