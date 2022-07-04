#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
string s;
int n,counter=0;
cin>>n;
cin>>s;
 
for(int i=0;i<n-2;i++){
    if(s[i]=='0'&&s[i+1]=='0')
        counter+=2;
    else if(s[i+2]!='1'&&s[i]=='0'){
        counter+=1;
        }
}
//cout<<counter<<endl;
string temp="";
temp=temp+s[n-2]+s[n-1];
//cout<<temp<<endl;
if(temp=="00")
    counter+=2;
 
 
 
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