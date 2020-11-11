#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int s,r,i,count;
    cin>>s>>r;
    int sample[s],range[r][2],result[r];
    for(i=0;i<s;i++)
    {
        cin>>sample[i];
    }
    
    for(i=0;i<r;i++)
    {
        count=0;
        cin>>range[i][0]>>range[i][1];
        for(int j=0;j<s;j++)
        {
            if(sample[j]>range[i][0] && sample[j]<range[i][1]) count++;
        }
        result[i]=count;
    }
    
    for(i=0;i<r;i++)
    {
        cout<<result[i]<<" ";
    }

    return 0;
}
