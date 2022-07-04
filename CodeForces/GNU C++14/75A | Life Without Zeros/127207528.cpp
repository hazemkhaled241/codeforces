#include <iostream>
#include<typeinfo>
#include<string>
#include <sstream>
#include<algorithm>
using namespace std;
 
 
int main()
{
 
 long long a,b,sum,n1,n2;
 
cin>>a;
cin>>b;
ostringstream strg;
ostringstream strg2;
ostringstream strg3;
strg<< a;
strg2<< b;
strg3<<a+b;
string s1 = strg.str();
string s2 = strg2.str();
string s3 = strg3.str();
s3.erase(remove(s3.begin(), s3.end(), '0'), s3.end());
s1.erase(remove(s1.begin(), s1.end(), '0'), s1.end());
s2.erase(remove(s2.begin(), s2.end(), '0'), s2.end());
stringstream intTicket(s3);
intTicket >> sum;
stringstream intTicket1(s1);
intTicket1 >> n1;
stringstream intTicket2(s2);
intTicket2 >> n2;
 
if(n1+n2==sum)
    cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
 
return 0;
}