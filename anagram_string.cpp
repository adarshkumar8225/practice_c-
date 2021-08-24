
bool is_anagram(string s1,string s2)
{
    unordered_map<char,int> m1,m2;
    for(auto x: s1)  m1[x]++;
    for(auto x : s2) m2[x]++;

    for(auto x : m1)
    {
        if(m2[x.first]!=x.second) return 0;
    }
    return 1;
}

vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    vector<vector<int> > v;
    //vector<int> temp;
     vector<int> visited(A.size(),0);
    for(int i=0;i<A.size();i++)
    {
        if(visited[i]) continue;
        
        visited[i]=1;
        vector<int> temp;
        
        temp.push_back(i+1);
        if(i==A.size()-1) 
        {
            v.push_back(temp);
            continue;
        }
        for(int j=i+1;j<A.size();j++)
        {
            if(is_anagram(A[i],A[j]))
            {
                temp.push_back(j+1);
                visited[j]=1;
            }
        }

        v.push_back(temp);
      
    }
    return v;
}
