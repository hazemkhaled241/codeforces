#include <iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    int x,counter;
    counter=0;
    int a;
    bool c1;
    bool c2;
     cin>>x;
  int arr[x];
 
    for(int i=0;i<x;i++){
     cin>>a;
     arr[i]=a;
                        }
 
        sort(arr,arr+x);
for(int i=0;i<x;i++){
    if(arr[0]<arr[i]&&arr[i]<arr[x-1])
    counter++;
 
}
   cout<<counter;
 
 
    return 0;
}