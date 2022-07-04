#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <string>
using namespace std;
 string lucky(){
int n,sum=0;
bool flag=true;
string str;
cin>>n;
int arr[n];
 
for(int i=0;i<n;i++){
cin>>arr[i];
sum+=arr[i]-1;
}
if(sum%2!=0)
   return "errorgorn";
else
   return "maomao90";
 
 
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