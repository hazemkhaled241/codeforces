#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
long long n,num,index=0;
bool f=true,two=true;
 
 
string s;
cin>>s;
char minm=s[0];
for(int i=1;i<s.size();i++){
if(s[i]<minm){
    minm=s[i];
    index=i;
}
}
cout<<s[index]<<" ";
for(int i=0;i<s.size();i++){
    if(i!=index)
        cout<<s[i];
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
 
 
 
 
 
 
 
 