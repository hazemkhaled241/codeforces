#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
int k,n,m,counter1=0,counter2=0;
bool flag1,flag2,b=false;
string s1,s2,c="";
cin>>n>>m>>k;
cin>>s1;
cin>>s2;
std::sort(s1.begin(), s1.end());
std::sort(s2.begin(), s2.end());
if(s1[0]<s2[0]){
    flag1=true;
    flag2=false;
}
else{
    flag1=false;
    flag2=true;
 
}
while(counter1<n&&counter2<m){
 
    for(int i=0;i<k;i++){
    if(flag1){
        if(counter1<n&&s1[counter1]<s2[counter2]){
                b=false;
            c=c+s1[counter1];
            counter1++;
 
            }
         else if(counter1<n&&i==0){
            c=c+s1[counter1];
            counter1++;
            flag1=false;
            flag2=true;
            b=true;
            break;
         }
         else if(counter1<n){
            flag1=false;
            flag2=true;
            b=true;
            break;
 
         }
 
    }
   else if(flag2){
        if(counter2<m&&s2[counter2]<s1[counter1]){
                b=false;
            c=c+s2[counter2];
            counter2++;
 
            }
         else if(counter2<m&&i==0){
            c=c+s2[counter2];
            counter2++;
            flag2=false;
            flag1=true;
            b=true;
            break;
         }
         else if(counter2<m){
            flag2=false;
            flag1=true;
            b=true;
            break;
 
         }
 
 
 
 
    }
 
 
    }
    if(flag1&&!b){
        flag1=false;
        flag2=true;
 
    }
    else if(flag2&&!b){
        flag2=false;
        flag1=true;
 
    }
 
}
cout<<c<<endl;
 
 
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
 
 
 
 
 
 
 
 