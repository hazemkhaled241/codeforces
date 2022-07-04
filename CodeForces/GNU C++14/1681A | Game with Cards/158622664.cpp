#include <iostream>
 
using namespace std;
void solve(){
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
 
 
}
int main()
{
 
    int t;
 
    cin>>t;
    for(int i=0;i<t;i++){
     solve();
 
    }
 
    return 0;
}