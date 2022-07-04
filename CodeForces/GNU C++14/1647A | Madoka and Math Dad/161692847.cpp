#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
 long long  n,s=0,counter=0;
bool f=true,two=true;
 
cin>>n;
while(s!=n){
  if(two){
    s+=2;
    two=false;
  }
  else{
    s+=1;
    two=true;
  }
   counter++;
    if(s>n){
        f=false;
        break;
    }
 
 
}
 
if(f){
    two=true;
   for(int i=0; i<counter; i++){
 if(two){
  cout<<"2";
    two=false;
  }
  else{
    cout<<"1";
    two=true;
  }
 
        }
        cout<<endl;
}
else{
    two=false;
   for(int i=0; i<counter; i++){
 if(two){
  cout<<"2";
    two=false;
  }
  else{
    cout<<"1";
    two=true;
  }
 
        }
        cout<<endl;
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
 
 
 
 
 
 
 
 