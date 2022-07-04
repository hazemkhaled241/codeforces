#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
int a,b;
cin>>a>>b;
 
 if(a==1&&b==1){
    cout<<0<<endl;
    return;
    }
   else if((a==1&&b>2)||(b==1&&a>2)){
        cout<<-1<<endl;
        return;
 
   }
 else if(max(a,b)==min(a,b)+1){
        cout<<((max(a,b)-2)*2)+1<<endl;
        return;
 }
 
if((max(a,b)-min(a,b))%2!=0)
   cout<<((max(a,b)-2)*2)+1<<endl;
else if((max(a,b)-min(a,b))%2==0)
    cout<<(max(a,b)-1)*2<<endl;
else
    cout<<-1<<endl;
 
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