#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
long long n,result=0;
bool f=true,two=true;
 
cin>>n;
long long arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
result=(result|arr[i]);
}
 
cout<<result<<endl;
 
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
 
 
 
 
 
 
 
 