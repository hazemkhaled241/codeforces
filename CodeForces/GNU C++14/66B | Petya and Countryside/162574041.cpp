#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
long long n,result=1,maxm=0;
bool f=false,two=true;
 
 
cin>>n;
long long arr[n];
if(n==1){
  cin>>arr[0];
  cout<<result<<endl;
  return;
  }
 
 
for(int i=0;i<n;i++){
    cin>>arr[i];
}
 
 
for(int i=0;i<n;i++){
long long right=i;
long long left=i;
result=1;
while(right<n-1||left>0){
    if((!(right<n-1)||arr[right]<arr[right+1])&&(!(left>0)||arr[left]<arr[left-1])){
        break;
    }
    if(right<n-1&&arr[right]>=arr[right+1]){
        result++;
        right++;
        }
     if(left>0&&arr[left]>=arr[left-1]){
        result++;
        left--;
     }
 
}
if(maxm<result)
    maxm=result;
 
}
 
 
 
   cout<<maxm<<endl;
 
}
 
 
 
 
 
 
 
 
 
int main()
{
 
  //int t;
 
   //cin>>t;
    //for(int i=0;i<t;i++){
 
   lucky();
    //}
 
    return 0;
}
 
 
 
 
 
 
 
 