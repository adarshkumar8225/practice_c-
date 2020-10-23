//sequence: 1 2 1 3 2 5 3 7 5 11 8....
//odd terms have fibonacci series and even terms have prime numbers in ascending order.
// print nth number in the sequence..................

#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
//fibonacci series nth term.********************************
int fibonacci(int n)
{
    if(n==1) return 1;
    else if(n==2) return 1;
    else return (fibonacci(n-2)+fibonacci(n-1));
}
//kth prime number is returned>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>******************
int prime(int k)
{
    int prime_no=0,flag,i,j;
    for(j=2;j<k*k;j++)
    {
        flag=1;
        for(i=1;i<=j/2;i++)
        {
            if(i!=1 && j%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1) prime_no++;
        if(prime_no==k) return j;
    }
}
int main()
{
    int n;
    cin>>n;

     if(n%2)
    {
       cout<<fibonacci(n/2+1);
    }
    else
    {
        cout<<prime(n/2);
    }
  
    return 0;
}
