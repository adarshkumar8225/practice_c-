//problem Link-->
//A array contains heights of blocks find the amount of water trapped between the blocks 

       int trappingWater(int arr[], int n){
        // Code here
        //It keeps the max value in the right of current block
        int right[n-1];
        int left=arr[0];//left stores the max value in the left of current block
       
        //Store the max value to the right of current position in O(N).
        right[n-2]=arr[n-1];
        for(int i=n-3;i>=0;i--)
        {
            if(arr[i+1]>right[i+1])
            {
                right[i]=arr[i+1];
            }
            else 
            right[i]=right[i+1];
            
        }
        
        int val=0;
        for(int i=1;i<n-1;i++)
        {
            //min value of max value at right and left
            int h=min(left,right[i]);
            //if current height is smaller than left and right max value then only 
            //water can be trapped in it.
            if(arr[i]<h)
            {
                val=val+h-arr[i];
            }
            //Update left value if current value is greater than left.
            if(left<arr[i]) left=arr[i];
        }
        return val;
    }
