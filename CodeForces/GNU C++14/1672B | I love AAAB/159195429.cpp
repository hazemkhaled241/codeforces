#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <string>
using namespace std;
 string lucky(){
int b=0,a=0;
string str;
cin>>str;
if(str[0]=='B'||str.size()==1||str[str.size()-1]=='A')
   return "NO";
for(int i=0;i<str.size();i++){
 
 if(str[i]=='A')
    a++;
if(str[i]=='B'&&a>0){
      a--;
}
else if(str[i]=='B'&&a==0){
 
  return "NO";
}
 
 
 
}
 
  return "YES";
 
 
 }
 
int main()
{
 
  int t;
 
   cin>>t;
    for(int i=0;i<t;i++){
 
   cout<<lucky()<<endl;
    }
 
 
 
    return 0;
}