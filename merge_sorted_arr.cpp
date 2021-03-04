
//Merge two sorted array without using any extra spaces
// Problem Link->> https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1#
    
    void sort_array(int a[],int n)
    {
        for(int i=n-1;i>0;i--)
        {
            if(a[i]<a[i-1])
            {
                int temp=a[i];
                a[i]=a[i-1];
                a[i-1]=temp;
            }
            else break;
        }
    }
    
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    for(int i=m-1;i>=0;i--)
	    {
	        if(arr2[i]<arr1[n-1])
	        {
	            int temp=arr1[n-1];
	            arr1[n-1]=arr2[i];
	            arr2[i]=temp;
	            sort_array(arr1,n);
	        }
	    }
	    

	}
