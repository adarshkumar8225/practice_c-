
// Problem Link--> https://practice.geeksforgeeks.org/problems/longest-bitonic-subsequence0824/1


int LongestBitonicSequence(vector<int> nums)
	{
	    // code here
	    int n=nums.size();
	    int dp1[n]={0},dp2[n]={0};
	    int len=1,flag=0;
	    dp1[0]=1;
	    dp2[0]=1;
	    //find the increasing subsequence for the given vector.
	    //Store the value of longest increasing subsequence till ith index
	    //in dp1 array.
	    for(int i=1;i<n;i++)
	    {
	        flag=0;
	       for(int j=i-1;j>=0;j--)
	       {
	           if(nums[i]>nums[j])
	           {
	               if(dp1[i]<dp1[j]+1) dp1[i]=dp1[j]+1;
	               flag=1;
	           }
	       }
	       if(flag==0) dp1[i]=1;
  
	    }
	    
	    //Now reverse the vector
	    reverse(nums.begin(),nums.end());
	    //Again store the value of lis till ith index in dp2 array.
	    for(int i=1;i<n;i++)
	    {
	        flag=0;
	       for(int j=i-1;j>=0;j--)
	       {
	           if(nums[i]>nums[j])
	           {
	               if(dp2[i]<dp2[j]+1) dp2[i]=dp2[j]+1;
	               flag=1;
	           }
	       }
	       if(flag==0) dp2[i]=1;
  
	    }
	    //reverse the dp2 array 
	    reverse(dp2,dp2+n);
	    //store the sum of index wise element of dp1 and dp2 respectively.
	    for(int i=0;i<n;i++)
	    {
	        dp1[i]=dp1[i]+dp2[i];
	    }
	    //return the max of dp1-1 as output
	    return *max_element(dp1,dp1+n)-1;
	    
	}
