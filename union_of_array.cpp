// Problem link:-> https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1#

int doUnion(int a[], int n, int b[], int m)  {
    //code here
    int count=0;
    map<int,int> val;
    for(int i=0;i<n;i++)
    {
        val.insert(pair<int,int>(a[i],1));
    }
    for(int i=0;i<m;i++)
    val.insert(pair<int,int>(b[i],1));
    
    return val.size();
    
}
