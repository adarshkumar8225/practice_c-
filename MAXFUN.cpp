

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long int triplet_sum(int a,int b,int c)
{
    
    return(labs(a-b)+labs(c-a)+labs(b-c));
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        long int A[N],sum1;
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        sort(A,A+N);
     
        sum1=triplet_sum(A[0],A[1],A[N-1]);
    
        cout<<sum1<<endl;

    }

}

