
//Problem Statement->> https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1#

    //function for merging the two sorted array........................
    long long int merge(long long arr[],int l,long long mid,long long r)
    {
        long long int count=0;
        long long a[mid-l+1];//array to store first half of array.
        long long b[r-mid];//array to store 2nd half of array.
        //copy element of first half in array a[]...........
        for(int i=l, j=0;i<=mid;i++,j++) a[j]=arr[i];
        //copy element of 2nd half in array b[].............
        for(int i=mid+1, j=0;i<=r;i++,j++) b[j]=arr[i];
        int j=0,k=0,i=l;
        while((j<=mid-l)&&(k<r-mid))
        {
            //if element of 1st array is greater than element of 2nd array 
            //then all element from current element to end in first half
            //will be greater than current element of 2nd array
            //so increment the count by no. of element from index j to end.
            if(a[j]>b[k])
            {
                arr[i]=b[k];
                i++;
                k++;
                count=count+mid-l-j+1;
            }
            else
            {
                arr[i]=a[j];
                i++;
                j++;
            }
        }
        if(j<=mid-l)
        {
            while(j<=mid-l)
            {
                arr[i]=a[j];
                i++;j++;
            }
        }
        if(k<r-mid)
        {
            while(k<r-mid)
            {
                arr[i]=b[k];
                i++;
                k++;
            }
        }
        return count;
    }
    //function for merge sort...................................
    long long int merge_sort(long long arr[],int l,long long r)
    {
        long long int count=0;
        if(l>=r)
        {
            return count;
        }
        long long mid=l+(r-l)/2;
         count=count+merge_sort(arr,l,mid);
         count=count+merge_sort(arr,mid+1,r);
        count=count+merge(arr,l,mid,r);
        return count;
    }
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long int count=merge_sort(arr,0,N-1);
        
        
        return count;
    }
