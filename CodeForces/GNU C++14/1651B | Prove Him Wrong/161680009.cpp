#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
 long long  n,s=0,m;
bool f=true;
 
cin>>n;
while(s<n){
  if((long long)pow(3,s)>1000000000){
    f=false;
    break;
  }
  s++;
}
 
if(f){
 cout<<"yes"<<endl;
   for(int i=0; i<n; i++){
            cout<<(long long)pow(3,i)<<" ";
        }
        cout<<endl;
}
else{
    cout<<"NO"<<endl;
}
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
 
 
 
 
 
 
 
 