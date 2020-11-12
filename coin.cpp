#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int A[t],k=0;
    while(t--)
    {
        int n,sum=0,i=1;
        cin>>n;
        while(sum<n)
        {
            sum=sum+i;
            i++;
        }
        A[k++]=--i;
    }
    
    for(int j=0;j<k;j++)
    {
        cout<<A[j]<<" ";
    }
    return 0;
}
