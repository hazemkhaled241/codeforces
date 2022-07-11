    #include <iostream>
    #include <algorithm>
    #include <cstdlib>
    #include <limits>
    #include <cmath>
    #include <string>
    #include <bits/stdc++.h>
    using namespace std;


    void lucky(){
    int n,maxm=0,minm=10e7,last,first,sum=0,m;
    bool f=false,two=true;
    string s1,s2,t="";

    cin>>s1>>s2;

    m=s1.size()/s2.size();
    for(int x=0;x<m;x++){
        t=t+s2;
    }
    if(t==s1){
      cout<<"YES"<<endl;
      return;
    }
    if(s1.size()>s2.size()){
    int num=s1.size()-s2.size();
    int num2=s2.size();
    string str2 = s1.substr (num,num2);
    if(str2==s2){
        cout<<"YES"<<endl;
        return;
    }

    }
       int r=0;
      for(int i=0;i<s1.size();i++){
        if(r!=s2.size()&&s2[r]==s1[i]){
            r++;

            }
           }
       if(r!=s2.size()){
        cout<<"NO"<<endl;
        return;
       }
    int freq[s2.size()]={0};
    char temp[s1.size()];
    std::fill(temp, temp +s1.size() , ' ');
    int j=0;
    for(int j=0;j<s2.size();j++){
      for(int i=0;i<s1.size();i++){
        if(s2[j]==s1[i]){
            temp[i]=s1[i];
            freq[j]++;
            }
           }

    }
    int freq2[s2.size()]={0};
    int stop[s2.size()];
    std::fill_n(stop,s2.size() , 1);

    for(int j=0;j<s2.size();j++){
        for(int k=0;k<s2.size();k++){
            if(s2[j]==s2[k]){

                if(freq2[j]>=1){
                    stop[k]=0;
                }

                freq2[j]++;

                }
        }

    }

    string str="";
    for(int i=0;i<s1.size();i++){
        if(temp[i]!=' ')
            str=str+temp[i];

    }

   int l;
     for(int j=0;j<s2.size();j++){
        l=abs(freq[j]-freq2[j]);
        //cout<<s2[j]<<" "<<l<<" "<<stop[j]<<endl;
        for(int i=0;i<str.size();i++){

           if(str[i]==s2[j]&&l>0&&stop[j]){
              str[i]=' ';
              l--;
              }
     // cout<<str<<endl;
                   }
                              }



  int counter=0;
    for(int i=0;i<str.size();i++){
     if(str[i]!=' '&&str[i]==s2[counter]){
          counter++;
        }
       else if(str[i]!=' '&&str[i]!=s2[counter]){
         cout<<"NO"<<endl;
        return;}

        }
  cout<<"YES"<<endl;



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


