#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
 
int lucky(){
  int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {int x; cin>>x; v[i] = x;}
        if(n == 1){
          return 0;
        }
        int count1 = 0;
        int i = 1;
 
        while(i < n){
            int j = i;
            while(j < n && v[j] >= v[j-1]) j++;
            if(j >= n) break;
            count1++;
            i = j + 2;
        }
 
        return count1;
 
 
 }
 
int main()
{
 
  int t;
 
   cin>>t;
    for(int i=0;i<t;i++){
 
    cout<< lucky()<<endl;
    }
 
 
 
    return 0;
}
 
 
 
 