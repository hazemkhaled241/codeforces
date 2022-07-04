#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <string>
using namespace std;
 string lucky(){
int n;
float sum=0.0;
bool flag=true;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
 cin>>arr[i];
 if(i>0&&arr[0]!=arr[i])
    flag=false;
}
if(flag)
    return "YES";
else{
for(int j=0;j<n;j++){
        sum=0;
 for(int x=0;x<n;x++){
   if(x!=j)
    sum=sum+arr[x];
 
 
 }
 
if((sum/(n-1))==arr[j]){
 
    return "YES";
 
}
}
 return "NO";
}
 
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