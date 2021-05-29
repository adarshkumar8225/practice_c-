   int solveWordWrap(vector<int>nums, int k) 
    { 
        // Code here
        int val=k,cost=0;
       /* val=val-nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(val-nums[i]>=1)
            {
                val=val-nums[i];
            }
        }*/
        val=val-nums[0];
        int i;
        for( i=1;i<nums.size()-1;i++)
        {
            if(val-nums[i]>1)
            {
                val=val-nums[i]-1;
            }
            else
            {
                cost=cost+val;
                val=k;
                val=val-nums[i];
            }
        }
        if(val-nums[i]>0) return cost;
        else
        return cost+val;
    } 
