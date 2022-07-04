#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
void lucky(){
string arr[8];
 
for(int i=0;i<8;i++){
    cin>>arr[i];
}
 for(int i=1;i<8;i++){
     string s=arr[i];
    for(int j=1;j<8;j++){
        if(s[j]=='#'&&arr[i-1][j-1]=='#'&&arr[i-1][j+1]=='#'&&arr[i+1][j-1]=='#'&&arr[i+1][j+1]=='#'){
            cout<<i+1<<" "<<j+1<<endl;
            break;
        }
 
 
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