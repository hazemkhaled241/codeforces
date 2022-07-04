#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
int n,rep=1,total=0;
bool f=true;
cin>>n;
int arr[n];
int counter=0,index;
int result[n]={0};
for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]=abs(arr[i]);
 
}
sort(arr, arr + n);
for(int i=0;i<n;i++){
            if(arr[i]!=0){
            result[counter]=arr[i];
            index=i+1;
            break;
            }
}
for(int j=index;j<n;j++){
    if(arr[j]==result[counter]&&rep<2&&arr[j]!=0){
        counter++;
        result[counter]=arr[j];
         rep++;
       }
       else if(arr[j]!=result[counter]&&arr[j]!=0){
        counter++;
        result[counter]=arr[j];
        rep=1;
       }
 
       }
 
 
 
int c=0 ;
for (int x=0; x < n; x++){
        if(result[x]!=0)
            c++;
        else
            break;
 
            }
if(arr[0]==0&&c!=0)
     cout<<c+1<<endl;
else if(arr[0]==0&&c==0)
    cout<<1<<endl;
else
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
 
 
 
 
 
 
 
 