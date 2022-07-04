#include <iostream>
 
using namespace std;
void getAllRemainder(long long a, long long b,long long c)
{
    cout<<a+b+c<<" "<<b+c<<" "<<c<<endl;
}
int main()
{
    long long a,b,c;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
     getAllRemainder(a,b,c);
 
    }
 
    return 0;
}