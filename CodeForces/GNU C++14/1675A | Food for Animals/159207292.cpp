#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <string>
using namespace std;
 string lucky(){
int arr[5];
for(int i=0;i<5;i++){
 
cin>>arr[i];
}
 if(arr[0]+arr[2]>=arr[3]){
     if(arr[2]==0||arr[3]==0||arr[0]>=arr[3])
        arr[2]=arr[2];
 
     else if(arr[3]>arr[0])
       arr[2]=(arr[0]+arr[2])-arr[3];
 
 }
  else
    return "NO";
 
  if(arr[1]+arr[2]>=arr[4]){
           return "YES";
}
else
        return "NO";
 
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