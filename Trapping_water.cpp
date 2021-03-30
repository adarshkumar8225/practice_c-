//problem Link-->
//A array contains heights of blocks find the amount of water trapped between the blocks 

    int trappingWater(int arr[], int n){
        // Code here
        int right[n-1];
        int left=arr[0];
        for(int i=0;i<n-1;i++)
        {
            right[i]= *max_element(arr+i+1,arr+n);
        }
        int val=0;
        for(int i=1;i<n-1;i++)
        {
            int h=min(left,right[i]);
            if(arr[i]<h)
            {
                val=val+h-arr[i];
            }
            if(left<arr[i]) left=arr[i];
        }
        return val;
    }


