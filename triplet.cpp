
//Problem Link--->> 
// For given array find any triplet subset whose sum is equal to X, if yes return 1 else return 0..
//Algorithm : Generate all subset with size 3 and find its sum , if it is equal to X return 1

bool subset(int A[],vector<int> v,int X,int l,int n,bool val)
    {
        if(l==n)
        {
            if(v.size()==3)
            {
                if(X==accumulate(v.begin(),v.end(),0)) return 1;
                else return 0;
            }
            return 0;
        }
        bool val1=subset(A,v,X,l+1,n,val);
        v.push_back(A[l]);
        bool val2=subset(A,v,X,l+1,n,val);
        val= val1 || val2;
        return val;
    }
    
    
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        vector<int> v;
        bool val=0;
        return (subset(A,v,X,0,n,val));
    }
