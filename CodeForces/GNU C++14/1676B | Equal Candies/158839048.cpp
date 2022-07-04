#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <limits>
using namespace std;
 
 
 
void candies(){
int n,minm=std::numeric_limits<int>::max();
int result=0;
cin>>n;
int arr[n];
 
for(int i=0;i<n;i++){
    cin>>arr[i];
if(arr[i]<minm)
    minm=arr[i];
 
}
 
for(int j=0;j<n;j++){
result=result+(arr[j]-minm);
 
 
}
 
cout<<result<<endl;
 
}
int main()
{
 
    int t;
 
    cin>>t;
    for(int i=0;i<t;i++){
 
candies();
    }
 
 
    return 0;
}