#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <string>
using namespace std;
 void lucky(){
int counter=0,n;
string s;
cin>>n;
cin>>s;
 for(int i=0;i<n;i++){
 
    if(i>0&&i%2!=0&&s[i]!=s[i-1])
         counter++;
 
 }
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