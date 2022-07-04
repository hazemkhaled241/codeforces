#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <string>
using namespace std;
 void lucky(){
int n,sum1=0,sum2=0;
cin>>n;
 
for(int i=0;i<3;i++){
    sum1=sum1+(n%10);
    n=n/10;
 
}
for(int j=0;j<3;j++){
    sum2=sum2+(n%10);
    n=n/10;
 
}
if(sum1==sum2)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
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