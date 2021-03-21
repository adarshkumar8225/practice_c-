
//Problem Statement--->> https://practice.geeksforgeeks.org/problems/cutted-segments1642/1#

int maximizeTheCuts(int n, int x, int y, int z)
{
    //Your code here
    vector<int> arr;
    int dp[n+1];
    for(int i=0;i<=n;i++) dp[i]=0;
    arr.push_back(x);
    arr.push_back(y);
    arr.push_back(z);

    for(int j=0;j<3;j++)
    {
        // updating the point where we can reach from x,y,z
        for(int i=1;i<=n;i++)
        {
            // if length of rod is greater than or equal to 
            // arr[j] then store the value.
            if(i==arr[j] || (i>arr[j] && dp[i-arr[j]]>0))
            dp[i]=max(dp[i-arr[j]]+1,dp[i]);
        }
    }
    return dp[n];
}
