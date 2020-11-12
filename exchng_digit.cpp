#include <iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<int > result;
void permute(vector<int> v,int l,int r,int b)
{
    if(l==r)
    {
        int res=0;
        
        for(int i=0;i<v.size();i++)
        {
            res=res+v[i]*pow(10,v.size()-i-1);
        }
        if(res>b) 
        {
            result.push_back(res);
            return;
        }
    }
    else
    {
        for(int i=l;i<=r;i++)
        {
            swap(v[l],v[i]);
            permute(v,l+1,r,b);
        }
    }
}

void digit(int N,int b)
{
    int i=1,x;
    vector<int > v;
    while(N)
    {
        x=N%10;
        
        v.push_back(x);
        N=N/10;
    }
    sort(v.begin(),v.end());
    permute(v,0,v.size()-1,b);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        digit(a,b);
        cout<<result[0]<<" ";
        result.clear();
       
    }

    return 0;
}
