
//Problem Link->>> https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1#

 bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_map<int,int> m;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            //if till now sum is 0 then 0 sum is possible 
            //or if previous value of sum is encountered again
            //if at i=0 sum was 4 again at i=3 sum is 4 it means that
            //sum of elements from i=1 to i=3 is 0 that is why same value of sum is 
            //observed 
            if(sum==0 || m[sum]==1) return 1;
            else m[sum]=1;
        }
        return 0;
    }
