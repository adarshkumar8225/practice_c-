
#include <iostream>
#include<math.h>
using namespace std;
int no_of_digit(int x)
{
    int n=0;
    while(x)
    {
        x=x/10;
        n++;
    } 
    return(n);
}

int armstrong(int x)
{
    int n,sum=0,r,d;
    r=x;
    n=no_of_digit(x);
    while(x)
    {
        d=x%10;
        x=x/10;
        sum=sum+pow(d,n);
    }
    if(sum==r) return(1);
    else return(0);
}

int main(int argc, char *argv[])
{
    int n,A;
    n=atoi(argv[1]);
    //cin>>n;
    A=armstrong(n);
    if(A==0)cout<<"NO"<<endl;
    else cout<<" YES "<<endl;
    return 0;
}

