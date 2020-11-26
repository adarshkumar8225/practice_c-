
//problem link:  https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1#

int longestSubsequence(int n, int a[])
{
   // your code here
   int dp[n],result=1,i=0,j;
   //initialize the value with 1.
   for(i=0;i<n;i++)
   {
       dp[i]=1;
   }
   //for each i go on traversing from 0 to i
   // and those element which is less than a[i] and its initial value at ith position
   //is less than value at jth position +1 then update the value. 
  
   for(i=1;i<n;i++)
   {
       for(j=0;j<i;j++)
       {
           if(a[i]>a[j] && dp[i]<dp[j]+1)
           {
               dp[i]=dp[j]+1;
           }
       }

       result=max(result,dp[i]);
   }
   //return max of all.
   return result;
  
}
