#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
 
 
 
void robots(){
int n,m,fRow=-1;
bool firstR=true;
cin>>n>>m;
string arr[n],temp,result="";
if(m==1&&n==1){
    cin>>arr[0];
  cout<<"YES"<<endl;}
 else{
for(int i=0;i<n;i++){
    cin>>arr[i];
    temp=arr[i];
    for(int j=0;j<m;j++){
        if(temp[j]=='R'&&firstR){
            fRow=j;
            firstR=false;
        }
        if(temp[j]=='R'&&j<fRow)
            result="NO";
    }
}
if(result=="NO")
   cout<<"NO"<<endl;
else
    cout<<"YES"<<endl;
 }
 
 
 
 
 
 
}
int main()
{
 
    int t;
 
    cin>>t;
    for(int i=0;i<t;i++){
 
robots();
    }
 
 
    return 0;
}