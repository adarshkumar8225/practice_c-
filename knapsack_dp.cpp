
//Problem Link->> https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1#

int knapSack(int W, int wt[], int val[], int n) 
{ 
   // Your code here
   
   int dp[n+1][W+1];
   
   for(int i=0;i<=n;i++)
   {
       for(int k=0;k<=W;k++)
       {
           if(k==0 || i==0) dp[i][k]=0;
           else
           {
               if(wt[i-1]<=k)
               {
                   dp[i][k]=max(val[i-1]+dp[i-1][k-wt[i-1]],dp[i-1][k]);
               }
               else dp[i][k]=dp[i-1][k];
           }
           
       }
   }
   

   return dp[n][W];
}
