#include <iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    string str,str2;
    int counter=0;
    cin>>n;
    cin>>str;
    if(n==str.size()){
    transform(str.begin(), str.end(), str.begin(), ::tolower);
   sort(str.begin(), str.end());
  str2=str[0];
  for(int i=0;i<n;i++){
    if(str[i]!=str2[str2.size()-1])
        str2+=str[i];
 
 
 
  }
 
 
     if(str2[str2.size()-1]=='z'&&str2[0]=='a'&&str2.size()>=26)
        cout<<"YES";
    else
        cout<<"NO";
 
 
    }
    return 0;
}