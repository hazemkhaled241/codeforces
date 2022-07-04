#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
int onesCounter=0,zerosCounter=0;
string s;
cin>>s;
if(s.size()==1){
    cout<<0<<endl;
    return;
    }
for(int i=0;i<s.size();i++){
    if(s[i]=='0')
        zerosCounter++;
    if(s[i]=='1')
        onesCounter++;
}
if(zerosCounter<onesCounter)
   cout<<zerosCounter<<endl;
else if(zerosCounter>onesCounter)
    cout<<onesCounter<<endl;
else
    cout<<onesCounter-1<<endl;
 
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