
//Problem Link--->> https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1#
// For given array find any triplet subset whose sum is equal to X, if yes return 1 else return 0..

    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        
        int sum=0;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1,k=n-1;j<k;)
            {
                sum=A[i]+A[j]+A[k];
                if(sum==X) return 1;
                else if(sum<X) j++;
                else k--;
            }
        }
        return 0;
    }
