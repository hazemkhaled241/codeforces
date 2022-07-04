#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
int a,b,c,d,counter=0;
 
    cin>>a>>b>>c>>d;
 
  if(b>a)
     counter++;
  if(c>a)
     counter++;
  if(d>a)
     counter++;
 
 
cout<<counter<<endl;
 
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