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
int s[n];
int e[n];
  for(int i=0;i<n;i++){
    cin>>s[i];
  }
  for(int i=0;i<n;i++){
    cin>>e[i];
  }
  cout<<e[0]-s[0]<<" ";
  for(int i=1;i<n;i++){
        if(s[i]<e[i-1]){
          cout<<e[i]-e[i-1]<<" ";
           }
         else
            cout<<e[i]-s[i]<<" ";
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