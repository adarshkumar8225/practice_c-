
//problem link:  https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1#



// Time Complexity : O(NlogN)

// return length of longest strictly increasing subsequence

int longestSubsequence(int n, int a[])
{
    //in this array index gives the length of subsequence
    // and value gives the last element at that length of subsequence.
    int dp[n]={0};
    //length gives the max length of subsequence till now.
    //flag identifies whether current value is smallest of all the values.
    int len=1,flag;
    
    //loop for index 0 to n.
    for(int i=0;i<n;i++)
    {
        if(i==0) dp[len]=a[i];
        else
        {
            flag=0;
            //compare last element of subsequences.
            for(int j=len;j>0;j--)
            {
                //last element is less than current value.
                if(dp[j]<a[i]) 
                {
                    j=j+1;
                    dp[j]= a[i];
                    if(len<j) len=j; // if length is less than j.
                    flag=1;
                    break;
                }
            }
            if(flag==0) dp[1]=a[i]; // if smallest of all the value.
            
        }
    }
    return len;
}
