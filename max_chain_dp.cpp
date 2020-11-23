
int maxChainLen(struct val p[],int n)
{
   
   int dp[n],i,j;
   for(i=0;i<n;i++) dp[i]=1;//array to store the result initialized to 1.
  
  //sort the array based on the first value of struct.
   for(i=0;i<n-1;i++)
   {
       for(j=i+1;j<n;j++)
       {
           //swapping using xor
           if(p[i].first>p[j].first)
           {
               p[i].first^=p[j].first;
               p[j].first^=p[i].first;
               p[i].first^=p[j].first;
               
               p[i].second^=p[j].second;
               p[j].second^=p[i].second;
               p[i].second^=p[j].second;
           }
       }
   }
   //for each i find which pair can be included till i.
   for(i=1;i<n;i++)
   {
       for(j=0;j<i;j++)
       {
           if(p[i].first>p[j].second && dp[i]<dp[j]+1)
           dp[i]=dp[j]+1;
       }
    }
    
   return dp[n-1];
}
