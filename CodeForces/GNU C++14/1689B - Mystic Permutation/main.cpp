    #include <iostream>
    #include <algorithm>
    #include <cstdlib>
    #include <limits>
    #include <cmath>
    #include <string>
    #include <bits/stdc++.h>
    using namespace std;

    void lucky(){
    int n,maxm=0,maxm2=0,l,r,counter=0;
    bool f=false,two=true;


    cin>>n;
    int arr[n];
    if(n==1){
         cin>>arr[0];
        cout<<-1<<endl;
        return;
    }

    int def[n];
    for(int i=0;i<n;i++){
        def[i]=i+1;
    }
    int res[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
           }

    for(int i=0;i<n;i++){
     for(int j=1;j<=n;j++){
        if(arr[i]!=j&&def[j-1]!=0){
            res[i]=j;
            def[j-1]=0;
            break;
            }
    }
    }
    if(res[n-1]==0){
        res[n-1]=res[n-2];
        res[n-2]=arr[n-1];

    }


    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";}


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



