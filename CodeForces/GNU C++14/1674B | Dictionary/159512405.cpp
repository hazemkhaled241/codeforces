#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <string>
using namespace std;
 void lucky(){
string s;
cin>>s;
int position1,position2;
if(s[1]<s[0]){
 position1 = s[0] - 'a' ;
 position2 =s[1]-'a'+1 ;
}
else{
 position1 = s[0] - 'a' ;
 position2 =s[1]-'a' ;
 
}
 
 
 
cout<<(25*position1)+position2<<endl;
 
 
 }
 
int main()
{
 
  int t;
 
   cin>>t;
    for(int i=0;i<t;i++){
 
     lucky();
    }
 
//cout<<position;
 
 
    return 0;
}