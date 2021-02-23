	//Problem :>> https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1#
  
  // In dp[i] we store the maximum sum of subsequence with ith element as the last element.
  
  
  int maxSumIS(int arr[], int n)  
	{  
	    // The array dp is used to store the sum of subsequences.
	    //dp[i] means the subsequence with maximum sum where ith element must be 
	    //the last element of that subsequence.
	    int dp[n]={0},flag=0;
	    
	    dp[0]=arr[0];
	    
	    //traverse the array from index 1 to end.
	    for(int i=1;i<n;i++)
	    {
	        flag=0;
	        for(int j=i-1;j>=0;j--)
	        {
	            if(arr[i]>arr[j])
	            {
	                flag=1;
	                if(dp[i]<(dp[j]+arr[i]))
	                dp[i]=dp[j]+arr[i]; //dp stores maximum possible sum
	            }
	        }
	        //when current element is smallest of all element visited till now.
	        if(flag==0) dp[i]=arr[i];
	    }
	   return *max_element(dp,dp+n);//output is max of dp array
	} 
