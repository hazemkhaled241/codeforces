#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <string>
using namespace std;
 void lucky(){
int n;
cin>>n;
if(n<=1399)
     cout<<"Division 4"<<endl;
else if(1400<=n&&n<=1599)
    cout<<"Division 3"<<endl;
else if(1600<=n&&n<=1899)
  cout<<"Division 2"<<endl;
else if(n>=1900)
  cout<<"Division 1"<<endl;
 
 
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