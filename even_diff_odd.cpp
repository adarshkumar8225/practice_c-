#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    long long num;
    int sum1=0,sum2=0,rem;
    cin>>num;
    int flag=0;
    while(num)
    {
         rem=num%10;
         //cout<<rem<<endl;
         num=num/10;
       if(flag==0)
       {
       
        sum2=sum2+rem;
        flag=1;
       }
       else 
       {
           sum1=sum1+rem;
           flag=0;
       }
    }
    if(sum1>sum2) cout<<sum1-sum2;
    else cout<<sum2-sum1;
}
