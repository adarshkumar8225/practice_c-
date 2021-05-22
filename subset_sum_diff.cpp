// Partition the array in such a way that difference of sum of each partition is minimum

//First calculate the sum of all the elements of an array.
//There is two partition One is having sum less than sum/2 (sum1). And other partition is having sum greater than sum/2(sum2).
//We need to find only sum1 . sum2 can be calculated as sum-sum1.
//we have to minimize (sum2-sum1) i.e (sum-sum1-sum1)= (sum-2*sum1)....
// we have to find max possible values of sum1 less than sum/2.

// Now we need to find which values less than sum/2 is the possible value of sum of subset
//then return (sum-2* max value of sum1)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//function returns the min difference of sum of two partitions of an array.
int min_subset_diff(int A[],int N,int sum)
{
    bool dp[N+1][sum/2+1];
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
                dp[i][j]=dp[i-1][j] || dp[i-1][j-A[i-1]];
            }
        }
    }
    for(int j=sum/2;j>=0;j--)
    {
        if(dp[N][j]) return sum-2*j;
    }
    
}


int main()
{
    int N;
    cin>>N;
    int A[N];
    int sum=0;
    for(int i=0;i<N;i++) {cin>> A[i];}
    //sum stores the sum of all the elements...............
    for(int i=0;i<N;i++) sum=sum+A[i];
     
    cout<<min_subset_diff(A,N,sum);

    return 0;
}
