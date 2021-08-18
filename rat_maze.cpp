    void path(vector<vector<int>> &m,int x,int y,int n,vector<string> &v,string str,
    vector<vector<int>> &visited)
    {
        if(x==n-1 && y==n-1 )
        {
            v.push_back(str);
            return;
        }
        
        visited[x][y]=1;
        
        if(x>0 && visited[x-1][y]==0 && m[x-1][y]==1)
        {
            path(m,x-1,y,n,v,str+'U',visited);
        }
        if(y>0 && visited[x][y-1]==0 && m[x][y-1]==1)
        {
            path(m,x,y-1,n,v,str+'L',visited);
        }
        
        if(x<n-1 && visited[x+1][y]==0 && m[x+1][y]==1)
        {
            path(m,x+1,y,n,v,str+'D',visited);
        }
        
        if(y<n-1 && visited[x][y+1]==0 && m[x][y+1]==1)
        {
            path(m,x,y+1,n,v,str+'R',visited);
        }
        
        visited[x][y]=0;
        
    }
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        
        vector<string> v;
        vector<vector<int>> visited(n,vector<int> (n,0));
        int x=0,y=0;
        if(m[0][0]==0 || m[n-1][n-1]==0)
        {
            string s="-1";
            v.push_back(s);
            return v;
        }
        path(m,x,y,n,v,"",visited);
        
        sort(v.begin(),v.end());
        return v;
    }
