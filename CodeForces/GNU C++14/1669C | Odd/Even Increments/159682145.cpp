#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
 
string lucky(){
  int n,neg=0,pos=0,counter=0;
  string s0,s1;
 
  bool flag=true;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) {
          cin>>arr[i];
          if(i==0&&arr[i]%2==0)
             s0="even";
          else if(i==0&&arr[i]%2!=0)
            s0="odd";
          if(i==1&&arr[i]%2!=0)
             s1="odd";
          else if(i==1&&arr[i]%2==0)
             s1="even";
 
          }
 
if(s0=="even"){
        for(int i = 0; i < n; i+=2){
            if(arr[i]%2!=0)
                return "NO";
 
        }
}
else{
        for(int i = 0; i < n; i+=2){
            if(arr[i]%2==0)
                return "NO";
 
        }
}
if(s1=="even"){
            for(int i = 1; i < n; i+=2){
            if(arr[i]%2!=0)
                return "NO";
 
}
}
else{
        for(int i = 1; i < n; i+=2){
            if(arr[i]%2==0)
                return "NO";
 
}
 
 }
 return "YES";
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
 
 
 
 