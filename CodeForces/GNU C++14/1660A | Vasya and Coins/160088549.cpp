#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
int lucky(){
int a,b;
cin>>a>>b;
if(a==0)
    return 1;
else
  return a+(2*b)+1;
 
 
}
int main()
{
 
  int t;
 
   cin>>t;
    for(int i=0;i<t;i++){
 
    cout<<lucky()<<endl;
    }
 
    return 0;
}