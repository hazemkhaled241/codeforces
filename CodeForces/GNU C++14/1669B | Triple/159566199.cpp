#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <string>
using namespace std;
 
 int lucky(){
int n;
cin>>n;
int hashh[n+1] = { 0 };
int arr[n];
 
for(int i=0;i<n;i++){
    cin>>arr[n];
    hashh[arr[n]]++;
    }
for(int i=0;i<=n;i++){
if(hashh[i]>=3)
   return i;
}
return -1;
 }
 
int main()
{
 
  int t;
 
   cin>>t;
    for(int i=0;i<t;i++){
 
     cout<<lucky()<<endl;
    }
 
//cout<<position;
 
 
    return 0;
}