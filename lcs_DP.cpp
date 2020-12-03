//problem link: >>> https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1#




int lcs(int x, int y, string s1, string s2){
    
    // your code here
   int dp[x+1][y+1],i,j;
   // 
   for(i=0;i<=x;i++)
   {
       for(j=0;j<=y;j++)
       {
           //if either i=0 or j=0 make it 0
           if(i==0 || j==0) dp[i][j]=0;
           //if match found just add 1 to the dignol value
           else if(s1[i-1]==s2[j-1])
           {
               dp[i][j]=dp[i-1][j-1]+1;
           }
           //no match just take max of its top and left neighbour.
           else
           dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
       }
   }
   //return the last value as answer
   return dp[x][y];
