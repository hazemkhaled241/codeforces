#include <iostream>
 
using namespace std;
void smallest_digit(int n) {
    int temp=n;
   int minm = n % 10;
   int counter=0;
   n /= 10;
   while (n != 0) {
      if (minm > n % 10){
         minm = n % 10;
 
         }
      n /= 10;
    counter++;
   }
   if(counter==1)
     cout<< temp%10<<endl;
    else
     cout<< minm<<endl;
}
int main()
{
    int n;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
     smallest_digit(n);
 
    }
 
    return 0;
}