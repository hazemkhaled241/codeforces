#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
long long n,last=1,current=1;
bool flag=true;
cin>>n;
long long arr[n];
for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0&&flag){
            last=i;
            flag=false;
            }
}
for(int j=n-1;j>0;j--){
    if(arr[j]==0){
       current=j+2;
       break;
       }
 
}
cout<<current-last<<endl;
 
 
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
 
 
 
 
 
 
 
 