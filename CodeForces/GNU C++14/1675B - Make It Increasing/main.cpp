    #include <iostream>
    #include <algorithm>
    #include <cstdlib>
    #include <limits>
    #include <cmath>
    #include <string>
    #include <bits/stdc++.h>
    using namespace std;

    void lucky(){
    int n,maxm=0,minm=10e7,secMax=0,r,counter=0;
    bool f=false,two=true;


    cin>>n;

    int arr[n];
      if(n==1){
       cin>>arr[0];
       cout<<0<<endl;
       return;
        }
        for(int i=0;i<n;i++){
        cin>>arr[i];
           }


int c=-1;
while(true){
        c++;
    if(arr[c]>=arr[c+1]){
            f=true;
        while(arr[c]>=arr[c+1]){
        if(arr[c]==0&&!(arr[c]<arr[c+1])){
            cout<<-1<<endl;
            return;
            }
        counter++;
        arr[c]=arr[c]/2;

        }
    }

    if(c==n-2&&f){
        f=false;
        c=-1;
    }
    else if(c==n-2&&!f){
        cout<<counter<<endl;
        return;
    }




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


