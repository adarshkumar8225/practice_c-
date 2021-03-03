

   int findDuplicate(vector<int>& nums)
    {  
        vector<int> v;
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(find(v.begin(),v.end(),nums[i])!=v.end()) return nums[i];
            else v.push_back(nums[i]);
        }
        return 1;
    }
