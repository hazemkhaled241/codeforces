#include <iostream>
    #include <algorithm>
    #include <cstdlib>
    #include <limits>
    #include <cmath>
    #include <string>
    #include <bits/stdc++.h>
    using namespace std;
 
 
    void solve(){
    long long n,num,half,k,balance=0,counter,counter1,counter2,e,curRem,power,maxm,rightSum=0,g,total,sum=0,reminder=0;
    bool f=false,two=true;
    cin>>n>>k;
    num=1;
    long long arr[n];
if(n==1){
        cin>>arr[0];
    cout<<max((long long)(arr[0]/(long long)2),(long long)(arr[0]-k))<<endl;
    return;
}
 
 for(long long i=0;i<n;i++){
  cin>>arr[i];
 
 }
 
 
 
 maxm=0;
  long long l,u,c;
 
for(long long i=0;i<n;i++){
    c=1;
    counter=1;
    reminder=0;
     for(long long j=i;j< n;j++){
         counter=counter*(long long)2;
        reminder=(long long)((long long)reminder+(long long)((long long)arr[j]/(long long)counter));
         c++;
         if(c>32)
            break;
         }
if(i==0){
    maxm=(long long)reminder;
    continue;
}
 
sum=(long long)((long long)sum+(long long)arr[(long long)((long long)i-(long long)1)]);
 l=(long long)(k*num);
 total=(long long)((long long)sum-(long long)l+(long long)reminder);
 
  if(total>maxm){
    maxm=(long long)total;
    }
 
num=(long long)((long long)num+(long long)1);
 
 
 
}
sum=(long long)((long long)sum+arr[(long long)(n-(long long)1)]);
u=(long long)((long long)sum-(long long)(num*k));
 
cout<<max(maxm,u)<<endl;
 
     }
 
    int main()
    {
 
    int t;
 
       cin>>t;
        for(int i=0;i<t;i++){
 
       solve();
        }
 
        return 0;
    }
