 #include <iostream>
    #include <algorithm>
    #include <cstdlib>
    #include <limits>
    #include <cmath>
    #include <string>
    #include <bits/stdc++.h>
    using namespace std;
 
 
    void lucky(){
    int n,maxm=0,minm=10e7,last,first,sum=2,m;
    bool f=false,two=true;
    string s,l;
    char c;
    cin>>n;
    int arr[n];
    string str[n];
 for(int i=0;i<n;i++){
  cin>>arr[i];
 }
for(int i=0;i<n;i++){
   cin>>l>>str[i];
 
}
   for(int i=0;i<n;i++){
        for(int j=0;j<str[i].size();j++){
            if(str[i][j]=='D'){
                if(arr[i]==9)
                    arr[i]=0;
                else
                    arr[i]=arr[i]+1;
            }
 
            else if(str[i][j]=='U'){
                    if(arr[i]==0)
                      arr[i]=9;
                    else
                      arr[i]=arr[i]-1;
 
            }
 
        }
 
 
   }
 
   for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
 }
cout<<endl;
 
 
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