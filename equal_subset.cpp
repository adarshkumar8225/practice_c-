
// Problem Link--->>> https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1#

    
    int equalPartition(int n, int arr[])
    {
    int sum = 0;
    int i, j;
 
    // Calculate sum of all elements
    for (i = 0; i < n; i++)
        sum += arr[i];
 
    if (sum % 2 != 0)
        return false;
 
    bool part[n+1][sum / 2 + 1];
    // Fill the partition table in bottom up manner
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= sum/2; j++) 
        {
            if(i==0)
            {
                if(j==0) part[i][j]=1;
                else part[i][j]=0;
            }
            else if(j==0) part[i][j]=1;
            else
            {
                //here we can either take current element or we can not take.
                //Since boolean value so for either or " OR" operator is used.
                if(arr[i-1]<=j) 
                {
                    part[i][j]=part[i-1][j]|| part[i-1][j-arr[i-1]];
                }
                //if element is bigger than the sum=j so arr[i-1] cant be included. 
                else part[i][j]=part[i-1][j];
            }
        }
    }

    return part[n][sum / 2];
}
