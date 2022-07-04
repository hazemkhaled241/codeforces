#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
/*void solve(){
 int n,m;
 int max1=0;
 int max2=0;
            cin>>n;
     int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
            if(arr[j]>max1)
                max1=arr[j];
        }
        cin>>m;
     int arraay[m];
        for(int x=0;x<m;x++){
            cin>>arraay[x];
            if(arraay[x]>max2)
                max2=arraay[x];
        }
     if(max1>max2){
       cout<<"Alice"<<endl;
       cout<<"Alice"<<endl;
     }
     else if(max1<max2){
       cout<<"Bob"<<endl;
       cout<<"Bob"<<endl;
     }
     else{
       cout<<"Alice"<<endl;
       cout<<"Bob"<<endl;
 
     }
 
 
}*/
/*
void buses(){
long long n,maxm,minm,reminder1,reminder2;
cin>>n;
maxm=0;
minm=0;
reminder1=n;
reminder2=n;
long long counter1=0;
long long counter2=0;
     if(n%4!=0){
   while(counter1!=100&&reminder1>0){
    reminder1=reminder1-6;
    counter1++;
    if(reminder1%4==0){
        maxm=(reminder1/4)+counter1;
        break;
    }
 
   }
 
     }
     else
        maxm=n/4;
    if(n%6!=0){
 
   while(counter2!=100&&reminder2>0){
    reminder2=reminder2-4;
    counter2++;
    if(reminder2%6==0){
        minm=(reminder2/6)+counter2;
        break;
    }
 
   }
     }
          else
        minm=n/6;
   if(minm==0&&maxm==0)
      cout<<-1<<endl;
   else if(minm==0)
          cout<<maxm<<" "<<maxm<<endl;
   else if(maxm==0)
              cout<<minm<<" "<<minm<<endl;
   else
      cout<<minm<<" "<<maxm<<endl;
 
 
 
}
*/
/*
void oddSubarrays(){
    int counter,n,counter2,counter3;
    counter=0;
    counter2=0;
    counter3=0;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
            if(j%2!=0&&arr[j-1]>arr[j])
               counter++;
            if(j!=0&&j%2==0&&arr[j-1]>arr[j])
               counter2++;
 
            if(j>0&&arr[j-1]>arr[j])
               counter3++;
        }
 
         if(counter3==n-1&&n!=1&&n%2!=0)
              cout<<1<<endl;
         else if(counter3==n-1&&n!=1&&n%2==0)
              cout<<n/2<<endl;
         else
            cout<<max(counter,counter2)<<endl;
 
 
 
 
 
 
}*/
void mostSimilarWords(){
int n,m,sum;
int minm=10000;
string s1,s2;
            cin>>n>>m;
          string arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
 
        }
  for(int i=n-1;i>0;i--){
       s1=arr[i];
    for(int x=i-1;x>=0;x--){
        sum=0;
       s2=arr[x];
    for(int k=0;k<m;k++){
     sum=sum+abs(s1[k]-s2[k]);
 
    }
if(sum<minm)
    minm=sum;
 
    }
if(minm==0)
    break;
 
  }
 
cout<<minm<<endl;
}
int main()
{
 
    int t;
 
    cin>>t;
    for(int i=0;i<t;i++){
 
mostSimilarWords();
    }
 
//cout<<'z'-'a'<<endl;
    return 0;
}