
//Problem link-->> https://leetcode.com/problems/majority-element-ii/submissions/
//list out elements which occurs more than n/3 times in the vector. n is length of vector. O(N) using map

 vector<int> majorityElement(vector<int>& nums) {
        unordered_map <int,int> m;
        vector<int> v;
        int p=nums.size();
        for(int i=0;i<p;i++)
        {   
            m[nums[i]]++;
        }
        for(auto itr=m.begin();itr!=m.end();++itr)
        {
            if(itr->second > p/3) v.push_back(itr->first);
        }
        return v;
    }
