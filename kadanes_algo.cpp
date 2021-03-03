//Kadanes Algorithm 
//Problem link:->> https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1#

// if maximum sum upto (i-1) element is negative (i.e dp[i-1]<0) then max subarray sum till ith position is dp[i]=arr[i] itself.
// else if maximum sum upto i-1 is positive then max subarray sum at ith position is dp[i]=dp[i-1]+arr[i].

int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int dp[n];
        dp[0]=arr[0];
        int max=dp[0];
        for(int i=1;i<n;i++)
        {
            if(dp[i-1]<0) dp[i]=arr[i];
            else dp[i]=dp[i-1]+arr[i];
            
            if(dp[i]>max) max=dp[i];
        }
        return max;
