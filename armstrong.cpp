/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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

int main()
{
    int n,A;
    cin>>n;
    A=armstrong(n);
    if(A==0)cout<<"NO"<<endl;
    else cout<<" YES "<<endl;
    return 0;
}
