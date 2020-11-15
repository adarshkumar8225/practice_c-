#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<int> height;


int calculate(int L,int R)
{
    int i,count,j,max,max_count;
    if(L==R) return 1;
    for(i=L;i<R;i++)
    {
        count=1;
        max=height[i];
        for(j=i+1;j<=R;j++)
        {
            if(height[j]>max) 
            {
                max=height[j];
                count++;
            }
        }
        if(count==(R-L+1)) return count;
        else if(i==L) max_count=count;
        else
        {
            if(count>max_count) max_count=count;
        }
        
    }
    
    return max_count;
}



int main()
{   
    //N number of heights, q queries and s used to calculate L and R.
    int N,q,s;
    cin>>N>>q>>s;
    
    int i,last=0,x,y,L,R,heights;
    height.push_back(0);
    //store N heights to global vector can be accessed by all functn.
    for(i=0;i<N;i++)
    {
        cin>>heights;
        height.push_back(heights);
    }
    
    //for each query..............................!!!!!!!!!!!!!
    for(i=0;i<q;i++)
    {
        cin>>x>>y;
        L=(x+s*last-1)%N+1;
        R=(y+s*last-1)%N+1;
        if(L>R)
        {
            L^=R;
            R^=L;
            L^=R;
        }
        last=calculate(L,R);
        cout<<last<<endl;
    }


}

