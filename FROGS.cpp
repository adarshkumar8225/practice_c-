

#include <iostream>
#include<bits/stdc++.h>
#include<vector>

#define MAX 100
using namespace std;
//anytime it checks whether the array is sorted or not.
bool check_sorted(int A[])
{
    vector <int> v;
    for(int i=0;i<99;i++)
    {
        if(A[i]==0) continue;
        else v.push_back(A[i]);
 
    }
    
    for(int i=0;i<v.size()-1;i++)
    {
        if(A[i]>A[i+1]) return 0;
        
    }
    return 1;
}

int value(int W[],int L[],int i)
{
    int count=0,temp,temp_i;
    while(1)
    {
        int x=1;
        while(W[i]>W[i+x*L[i]]&& W[i+x*L[i]]!=0)
        {
             x++;
             count++;
        }
        if( W[i+x*L[i]]==0) 
        {
            W[i+x*L[i]]=W[i];
            L[i+x*L[i]]=L[i];
            W[i]=0;
            count++;
            break;
        }
        else
        {
            temp=W[i+x*L[i]];
            temp_i=i+x*L[i];
            W[i+x*L[i]]=W[i];
            L[i+x*L[i]]=L[i];
            W[i]=0;
            i=temp_i;
            W[i]=temp;
            count++;
            
        }
    }
    return count;
    
}


int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--)
	{
	    int N,count=0;
	    cin>>N;
	    int W[MAX]={0};
	    int L[MAX]={0};
	    
	    for(int k=0;k<N;k++) cin>>W[k];
	    for(int k=0;k<N;k++) cin>>L[k];
	    int i=0;
	    while(!check_sorted(W))
	    {
	        if(W[i]==0)
	        {
	            i++;
	            continue;
	        }
	        for(int j=i+1;j<MAX;j++)
	        {
	            if(W[i]>W[j] && W[j]!=0)
	            {
	                count=count+value(W,L,i);
	                i++;
	                break;
	            }
	        }
	        
	    }
	   cout<<count<<endl; 

	}
	
	return 0;
}
