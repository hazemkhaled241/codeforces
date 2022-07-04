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
string s;
int arr[29]={0};
cin>>s;
 
 
for(int i=0;i<s.size();i++){
arr[s[i]-'a'+1]++;
}
for(int i=0;i<s.size();i++){
if(arr[s[i]-'a'+1]==1){
    cout<<s.substr(i,s.size()-i)<<endl;
    break;
 
}
arr[s[i]-'a'+1]--;
 
}
 
 
 
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