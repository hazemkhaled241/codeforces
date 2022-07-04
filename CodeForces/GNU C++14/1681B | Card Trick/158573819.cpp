#include <iostream>
 
using namespace std;
void solve(){
 int n,m;
 int result=0;
            cin>>n;
     int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        cin>>m;
     int arraay[m];
        for(int x=0;x<m;x++){
            cin>>arraay[x];
           // result=result+arraay[x];
        }
        for(int y=0;y<m;y++){
            result=(result+arraay[y])%n;
        }
       cout<<arr[result]<<endl;
 
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