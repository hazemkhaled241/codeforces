#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <string>
using namespace std;
 
 void lucky(){
string s,sub1,sub2;
int position1=0,position2=0,first,last;
cin>>s;
int n=s.size();
if(n==1)
    cout<<"Bob"<<" "<<s[0]-'a'+1<<endl;
else if(n%2!=0){
   sub1 = s.substr(0 , n-1);
   last=s[n-1]-'a'+1;
   sub2 = s.substr(1 , n);
   first=s[0]-'a'+1;
for(int i=0;i<n-1;i++){
position1+=sub1[i]-'a'+1;
position2+=sub2[i]-'a'+1;
}
if(position1>position2)
cout<<"Alice"<<" "<<position1-last<<endl;
else
cout<<"Alice"<<" "<<position2-first<<endl;
 
}
else{
for(int i=0;i<n;i++){
position1+=s[i]-'a'+1;
}
cout<<"Alice"<<" "<<position1<<endl;
 
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