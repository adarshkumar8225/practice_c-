void comb_sum(vector<int> &v,int s_index,int target,vector<int> pattern,vector<vector<int> > &result)
    {
        //static vector<vector<int> > result;
       
        if(target==0)
        {
            result.push_back(pattern);
            return ;
        }
        else if(v[s_index]>target) return ;
        else if(s_index>=v.size()) return;
        else
        {
            vector<int> x;
            x=pattern;
            x.push_back(v[s_index]);
            comb_sum(v,s_index,target-v[s_index],x,result);
            comb_sum(v,s_index+1,target,pattern,result);
            
        }
        return ;
        
    }


vector<vector<int> > Solution::combinationSum(vector<int> &candidates, int target) {
    sort(candidates.begin(),candidates.end());
        candidates.erase(unique(candidates.begin(),candidates.end()),candidates.end());
        vector<vector <int> > result;
        vector<int> pattern;
        comb_sum(candidates,0,target,pattern,result);
        return result;  
    
  

}
