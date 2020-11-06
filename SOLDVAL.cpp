#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
       while(t--)
    {
        int n;
     
        cin>>n;   
        vector<int> a(n),l(n);
        
        for(int i=0;i<n;i++)
        {    cin>>a[i];l[i]=a[i];}
         

        vector<int> r=l;
            
        //starting from i=1 find min of l[i] and (l[i-1]+1) store it in l[i]
        for(int i=1;i<n;i++)
            l[i]=min(l[i],l[i-1]+1);
         //first make r=l then for r[i] take min of r[i] and r[i+1]+1 and store it in r[i].   
        for(int i=n-2;i>=0;i--)
            r[i]=min(r[i],r[i+1]+1);
        //print min of the two for every index
        for(int i=0;i<n;i++)
            cout<<min(l[i],r[i])<<" ";
            
        cout<<"\n";
    }
}

