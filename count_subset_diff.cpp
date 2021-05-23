// Count number of partition such that difference of sum of partition is equal to given value

//let sum = sum of all elements of array
//    sum1= sum of first partition
//    sum2= sum of 2nd partition
//    difference value = X (Given)
//    Find number of partition such that  sum2-sum1= X.

//Solution...............................................................................................
//  sum1-sum2= X ----(1)
//  sum1+sum2= sum ----(2)
//  Add equation 1 & 2 we get sum1=(X+sum)/2 
// Now we basically need to find the no. of subsets with sum= sum1................


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//function returns the count of difference of sum of two partitions equal to X.
int min_subset_diff(int A[],int N,int sum,int X)
{
    int dp[N+1][sum/2+1];
    for(int i=0;i<=N;i++)
    {
        for(int j=0;j<=sum/2;j++)
        {
            //Initialization of first row and first column 
            if(i==0)
            {
                if(j==0) dp[i][j]=1;
                else dp[i][j]=0;
            }
            else if(j==0) dp[i][j]=1;
            
            else
            {
                //if current value A[i-1] is greater than required sum j 
                //then current element cant be included.......
                if(j<A[i-1]) dp[i][j]=dp[i-1][j];
                // Otherwise take the sum (Not include current element + Include current element)
                else
                dp[i][j]=dp[i-1][j] + dp[i-1][j-A[i-1]];
            }
        }
    }
    //count the subset whose difference is X
    int count=0;
    for(int j=sum/2;j>=0;j--)
    {
        if(dp[N][j]) 
        {
            //Here j= sum1 and sum2-sum1=sum-2*j ,, here sum= sum of all elements.
            if(sum-2*j== X) count=count+dp[N][j];
        }
    }
    return count;
    
}


int main()
{
    int N;
    cin>>N;
    int A[N];
    int sum=0;
    for(int i=0;i<N;i++) {cin>> A[i];}
    
    int X;
    cin>>X;
    //sum stores the sum of all the elements...............
    for(int i=0;i<N;i++) sum=sum+A[i];
     
    cout<<min_subset_diff(A,N,sum,X);

    return 0;
}
