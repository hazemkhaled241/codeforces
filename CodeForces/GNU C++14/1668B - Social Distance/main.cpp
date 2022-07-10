#include <iostream>
    #include <algorithm>
    #include <cstdlib>
    #include <limits>
    #include <cmath>
    #include <string>
    #include <bits/stdc++.h>
    using namespace std;
 
    void lucky(){
    long long n,maxm=0,minm=10e7,last,first,sum=0,m;
    bool f=false,two=true;
 
 
    cin>>n>>m;
 
    long long arr[n];
 
      for(long long i=0;i<n;i++){
        cin>>arr[i];
           }
         sort(arr,arr+n);
           
      for(int i=0;i<n-1;i++){
 
      sum=sum+max(arr[i],arr[i+1]);
 
                            }
            first=arr[0];
            last=arr[n-1];                     
 
    sum=sum+max(first,last)+n;
 
 
    if(sum<=m){
       cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 
 
 
 
 
 
 
 
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