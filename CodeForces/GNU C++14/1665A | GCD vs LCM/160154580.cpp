#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
int n;
cin>>n;
if(n==4)
    cout<<1<<" "<<1<<" "<<1<<" "<<1<<endl;
else
   cout<<1<<" "<<n-3<<" "<<1<<" "<<1<<endl;
 
 
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