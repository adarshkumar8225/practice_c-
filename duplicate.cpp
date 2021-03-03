

    int findDuplicate(vector<int>& nums) {
        
        vector<int> v;
        for(int i=0;i<v.size();i++)
        {
            if(v.find(nums[i])!=v.end()) return nums[i];
        }
        
    }
