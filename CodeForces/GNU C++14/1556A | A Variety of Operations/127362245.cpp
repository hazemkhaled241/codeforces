#include <iostream>
 
using namespace std;
 
int main()
{
    long long c,d,t;
    cin>>t;
    for(long long i=0;i<t;i++){
  cin>>c>>d;
  if(c==0&&d==0)
    cout<<0<<"\n";
  else if(c==d&&c!=0)
    cout<<1<<"\n";
  else if((c%2==0&&d%2==0)||(d%2==0&&c%2==0))
    cout<<2<<"\n";
  else if(d%2==1&&c%2==1)
    cout<<2<<"\n";
  else if((c%2==0&&d%2==1)||(d%2==0&&c%2==1))
    cout<<-1<<"\n";
 
    }
    return 0;
}