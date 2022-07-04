#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
 
int a,b;
cin>>a>>b;
  while(a!=0||b!=0){
        if(a==0){
          cout<<"1";
          b--;
          }
 
         else if (b==0){
            cout<<"0";
            a--;
            }
         else{
             cout<<"10";
             a--;
             b--;
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