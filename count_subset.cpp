// Find no. of subset with sum=x ........................................

// Recursive Approach --> Time Complexity= O(2^N)............................

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
//Recursive function to count subset with sum equal to x.
int subset_sum(int A[],int i,int n,int x)
{
    static int count;
    // Base Condition..................
    if(i==n) 
    {
        if(x==0) count=count+1;
        return count;
    }
    
    else
    {
        subset_sum(A,i+1,n,x);
        subset_sum(A,i+1,n,x-A[i]);
    }
}

int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++) cin>>A[i];
    int x;
    cin>>x;
    cout<<subset_sum(A,0,n,x);
    return 0;
}
