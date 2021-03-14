
// Problem Link--->>> https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1#

    bool subsequence(int arr[],int i,int N,int sum,int count)
    {
        if(sum==count) return 1;
        if(i==N)
        {
            return 0;
        }
        
        bool v=subsequence(arr,i+1,N,sum,count+arr[i]);
        bool v1=subsequence(arr,i+1,N,sum,count);
        
        return(v||v1);
        
    }

    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++) sum+=arr[i];
        if(sum%2==1) return 0;
        sum=sum/2;
        bool v=subsequence(arr,0,N,sum,0);
        if(v) return 1;
        else return 0;
    }
