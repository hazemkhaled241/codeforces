#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
long long n,result=0;
bool f=true,two=true;
char ch;
string s;
cin>>s;
cin>>ch;
 
for(int i=0;i<s.size();i++){
if(s[i]==ch&&i%2==0){
    cout<<"YES"<<endl;
    return;
}
 
 
}
 
cout<<"NO"<<endl;
 
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
 
 
 
 
 
 
 
 