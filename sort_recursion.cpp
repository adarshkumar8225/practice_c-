

//Sort the vector element using recursion 
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void sort_array(vector<int> v,int l,int r,int n)
{
    if(r==n)
    {
        for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
        return;
    }
    else
    {
        for(int i=0;i<r;i++)
        {
            if(v[r]<v[i])
            {
                int temp=v[r];
                v.erase(v.begin()+r);
                v.insert(v.begin()+i,temp);
                break;
            }
        }
        sort_array(v,l,r+1,n);
    }
   // sort_array(v,l,r+1,n);
    

}


int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        v.push_back(t);
        
    }
    sort_array(v,0,1,n);
   // for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    return 0;
}
