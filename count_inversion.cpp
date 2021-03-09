
//Problem Statement->> https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1#

long long int merge(long long arr[],int l,long long mid,long long r,long long int count)
    {
        long long a[mid-l+1];
        long long b[r-mid];
        for(int i=l, j=0;i<=mid;i++,j++) a[j]=arr[i];
        
        for(int i=mid+1, j=0;i<=r;i++,j++) b[j]=arr[i];
        int j=0,k=0;
        for(int i=l;i<=r;i++)
        {
            if(j>mid-l)
            {
                arr[i]=b[k];
                k++;
                continue;
            }
            else if(k>=r-mid)
            {
                arr[i]=a[j];
                j++;
                continue;
            }
            if(a[j]<=b[k]) 
            {
                arr[i]=a[j];
                j++;
            }
            else
            {
                arr[i]=b[k];
                k++;
                count++;
            }
        }
        return count;
    }
  
    long long int merge_sort(long long arr[],int l,long long r,long long int count)
    {
        if(l>=r)
        {
            return count;
        }
        long long mid=(r+l)/2;
        long long int count1=merge_sort(arr,l,mid,count);
        long long int count2=merge_sort(arr,mid+1,r,count);
        count=merge(arr,l,mid,r,count);
        return count;
    }
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long int count=merge_sort(arr,0,N-1,0);
        for(int i=0;i<N;i++) cout<<arr[i]<<" ";
        
        return count;
    }
