#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <string>
using namespace std;
 string lucky(){
int sum=1;
bool flag=true;
string str;
cin>>str;
if(str.size()==1)
       return "NO";
for(int i=0;i<str.size();i++){
 
  if(i>0&&str[i]==str[i-1])
     sum++;
  else if(i!=0){
 
    if(sum==1||i==str.size()-1)
       return "NO";
    else
        sum=1;
 
 
 
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