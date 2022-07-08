    #include <iostream>
    #include <algorithm>
    #include <cstdlib>
    #include <limits>
    #include <cmath>
    #include <string>
    #include <bits/stdc++.h>
    using namespace std;

    void lucky(){
    int n,maxm=0,minm=10e7,secMax=0,r,sum=0;
    bool f=false,two=true;


    cin>>n;
    int arr[n];
        for(int i=0;i<n;i++){
        cin>>arr[i];
           sum+=arr[i];
           }
if((sum%n)==0)
    cout<<0<<endl;
else
    cout<<1<<endl;

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


