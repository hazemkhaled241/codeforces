#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
using namespace std;
 
/*bool isPalindrome(string s,int num){
int counter=s.size()-1;
for(int j=0;j<(s.size()-1)/2+1;j++){
if(j==num)
    continue;
if(s[j]!=s[counter])
  return false;
 
counter--;
}
return true;
}*/
 
/*void palindromic(){
int n,result=0;
string str="",temp;
cin>>n;
cin>>str;
for(int i=0;i<n/2;i++){
if(str[i+1]==str[n-1-i]){
  if(isPalindrome(str,i))
    result++;
}
}
 
if(n%2==0)
cout<<result*2<<endl;
else
cout<<(result*2)+1<<endl;
}
*/
void palindromic(){
int n,result=0,middle1,middle2;
string str="";
char temp;
cin>>n;
cin>>str;
if(n%2==0){
    middle1=(n/2)-1;
    middle2=(n/2);
    temp=str[middle1];
    }
else{
    middle1=(n/2)-1;
    middle2=(n/2)+1;
   temp=str[n/2];
}
while(middle2<n){
if(str[middle1]==str[middle2]&&str[middle1]==temp){
  result+=2;
  middle1--;
  middle2++;
  }
else
    break;
 
}
if(n%2==0)
  cout<<result<<endl;
else
 cout<<result+1<<endl;
}
int main()
{
 
   int t;
 
    cin>>t;
    for(int i=0;i<t;i++){
 
    palindromic();
    }
 
 
 
 
    return 0;
}