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
 
 
 
if(a==0&&b==0)
    cout<<0<<endl;
 
else if(((float)sqrt(pow(a,2)+pow(b,2)))==((int)sqrt(pow(a,2)+pow(b,2))))
    cout<<1<<endl;
else
    cout<<2<<endl;
 
 
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