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
 
 
 
if(a==1||b==1)
    cout<<(long long)((long long)max(a,b)*(long long)(max(a,b)+1))/(long long)2<<endl;
 
else
    cout<<(long long)(((long long)(b-1)*(long long )b)/(long long)2)+(long long)(((long long)(b*a)*(long long)(a+1))/(long long)2)<<endl;
 
 
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