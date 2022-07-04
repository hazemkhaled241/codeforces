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
int arr[3]={0};
bool flag=true;
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]=='r'){
        arr[0]=1;
        continue;}
    if(s[i]=='g'){
        arr[1]=1;
        continue;}
    if(s[i]=='b'){
        arr[2]=1;
        continue;}
    if(s[i]=='r'){
        arr[0]=1;
    continue;}
    if(s[i]=='R'&&arr[0]!=1){
        cout<<"NO"<<endl;
        flag=false;
        break;}
    if(s[i]=='G'&&arr[1]!=1){
        cout<<"NO"<<endl;
        flag=false;
        break;}
    if(s[i]=='B'&&arr[2]!=1){
        cout<<"NO"<<endl;
        flag=false;
        break;}
}
if(flag)
 cout<<"YES"<<endl;
 
 
 
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