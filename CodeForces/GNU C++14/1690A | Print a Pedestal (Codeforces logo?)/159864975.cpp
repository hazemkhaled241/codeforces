#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
 
void lucky(){
  int n,h1,h2,h3,temp1,temp2,temp3;
  cin>>n;
  h1=n-n/2;
  h2=n-h1;
  if(h1==h2){
    h2--;
  h3=h1-h2;
  }
else{
   if(h2-1>2){
  h3=2;
  h1--;
  h2--;}
else{
  h3=1;
  h2--;}
}
 
//  cout<<h2<<" "<<h1<<" "<<h3<<endl;
  while(h3+2<h2-1&&h3+2+h2-1+h1-1==n){
  h3+=2;
  h1=h1-1;
  h2=h2-1;
  }
  cout<<h2<<" "<<h1<<" "<<h3<<endl;
 
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
 
 
 
 