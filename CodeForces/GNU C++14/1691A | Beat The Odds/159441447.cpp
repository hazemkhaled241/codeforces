#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <string>
using namespace std;
 void lucky(){
int even=0,odd=0,n;
cin>>n;
int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]%2==0)
        even++;
    else
        odd++;
    }
 
 
 cout<<min(n-even,n-odd)<<endl;
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
//5