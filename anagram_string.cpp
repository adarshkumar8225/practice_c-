
vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    vector<vector<int> > v;
     unordered_map<string,vector<int> > m;
    for(int i=0;i<A.size();i++)
    {
        string s1=A[i];
        sort(s1.begin(),s1.end()); 

       m[s1].push_back(i+1);
    }
    for(auto x: m)
    {
        v.push_back(x.second);
    }
    return v;
}
