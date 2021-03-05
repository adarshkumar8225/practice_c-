//Problem link;->>>  https://leetcode.com/problems/merge-intervals/submissions/

//sort the vector based on starting index of the intervals.
//Maintain the start and end variable to keep the start and end of previously visited intervals.

vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> result;
        int start=intervals[0][0],end=intervals[0][1];
        
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=end)
            {
                
                end=max(end,intervals[i][1]);
            }
            else
            {
                result.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
            }
        }
        result.push_back({start,end});
        return result;
    }
