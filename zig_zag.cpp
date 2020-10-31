// link for problem:: https://practice.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion1638/1#


void zigZag(int arr[], int n) {
	    
	    // code here
	    int i,flag=1,j;

	    for(i=0,j=1;j<n;i++,j++)
	    {
          //first check for less than relation between two element
	        if(flag==1)
	        {
	            if(arr[i]>arr[j])
	            {
	                arr[i]^=arr[j];
	                arr[j]^=arr[i];
	                arr[i]^=arr[j];
	                flag=0;
	            }
	            else flag=0;
	        }
          //after less than check for greater than and after greter than check for less than and so on
	        else
	        {
	            if(arr[i]<arr[j])
	            {
	                arr[i]^=arr[j];
	                arr[j]^=arr[i];
	                arr[i]^=arr[j];
	                flag=1;
	            }
	            else flag=1;
	            
	        }

	    }

	}
