#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
int lucky(){
int n,counter,temp,e;
 
cin>>n;
temp=n;
if(n==1)
    return 3;
if(ceil(log2(n)) == floor(log2(n)))
    return n+1;
 
e=log2(n)+1;
 
  int binaryNum[e];
 
    int i = 0;
    while (n > 0) {
 
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
while(e>=0){
     if(binaryNum[e]==1&&(temp-pow(2, e))>0){
        temp=temp-pow(2, e);}
     e--;
 
    }
return temp;
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
 
 
 
 