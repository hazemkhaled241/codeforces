#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
using namespace std;
 void tokitsukaze(){
     int n,counter=0;
     bool flag=false;
    cin>>n;
        int arr[n];
        for(int x=0;x<n;x++){
            cin>>arr[x];
            if(arr[x]==0)
                    counter++;
            }
for(int i=0;i<n;i++){
   for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            flag=true;
        }
 
 
 
   }
  if(flag)
        break;
 
}
 
if(flag&&counter==0)
cout<<n<<endl;
else if(counter!=0)
cout<<n-counter<<endl;
else
cout<<n+1<<endl;
 
 }
 
int main()
{
 
   int t;
 
    cin>>t;
    for(int i=0;i<t;i++){
 
    tokitsukaze();
    }
 
 
 
 
    return 0;
}