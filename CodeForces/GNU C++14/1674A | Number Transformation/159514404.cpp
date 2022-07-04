#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <string>
using namespace std;
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
 
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
 void lucky(){
int x,y;
 
cin>>x>>y;
 
 
if(isPrime(y)&&x!=1&&x!=y)
    cout<<0<<" "<<0<<endl;
else if(y%x==0)
    cout<<1<<" "<<y/x<<endl;
else
    cout<<0<<" "<<0<<endl;
 
 
 
 }
 
int main()
{
 
  int t;
 
   cin>>t;
    for(int i=0;i<t;i++){
 
     lucky();
    }
 
//cout<<position;
 
 
    return 0;
}