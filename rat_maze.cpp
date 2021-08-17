    void path(vector<vector<int> > &m,vector<vector<int> > v,int n,vector<string> &str,int x,int y,string s)
    {
        if(x==n-1 && y==n-1) {str.push_back(s);return ;}
        if(x+1<n && m[x+1][y]!=0&& v[x+1][y]==0)
        {
            //s=s+'D';
            v[x+1][y]=1;
            path(m,v,n,str,x+1,y,s+'D');
        }
        if(y+1<n && m[x][y+1]!=0 && v[x][y+1]==0)
        {
            v[x][y+1]=1;
            path(m,v,n,str,x,y+1,s+'R');
        }
        
        if(y-1>=0 && m[x][y-1]!=0 && v[x][y-1]==0)
        {
            v[x][y-1]=1;
            path(m,v,n,str,x,y-1,s+'L');
        }
        
         if(x-1>=0 && m[x-1][y]!=0&& v[x-1][y]==0)
        {
            //s=s+'D';
            v[x-1][y]=1;
            path(m,v,n,str,x-1,y,s+'U');
        }
        
        return;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> str;
        string s="";
        vector<vector<int>> vec(n, vector<int> (n, 0));
        vec[0][0]=1;
        path(m,vec,n,str,0,0,s);
        return str;
    }
