#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
 
 
 
void beautifulArray(){
int l1,r1,l2,r2;
cin>>l1>>r1>>l2>>r2;
if(l1==l2)
    cout<<l1<<endl;
else if(l2>l1&&l2<=r1)
    cout<<l2<<endl;
else if(l1>l2&&l1<=r2)
    cout<<l1<<endl;    
else
    cout<<l1+l2<<endl;
 
 
}
int main()
{
 
    int t;
 
    cin>>t;
    for(int i=0;i<t;i++){
 
beautifulArray();
    }
 
 
    return 0;
}