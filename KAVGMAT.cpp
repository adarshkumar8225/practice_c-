// April Long Challenge 2021..--> https://www.codechef.com/APRIL21C/problems/KAVGMAT


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int N,M,K;
	    cin>>N>>M>>K;
	    long long int A[N][M]; 
	    long long int val=0;
	    for(long long int i=0;i<N;i++)
	    {
	        for(long long int j=0;j<M;j++) 
	        {
	            cin>>A[i][j];
	        }
	    }
	    long long int max_dim=min(M,N);
	    long long int l=0;
	    while(l<max_dim)
	    {
	        //for square matrix l x l find its sum and check if it is greater than K;
	        //when 1 x 1 matrix then just check the element 
	        l++;
	        if(l==1)
	        {
	            for(int i=0;i<N;i++)
	            {
	                for(int j=0;j<M;j++)
	                {
	                    if(A[i][j]>=K) val=val+1;
	                }
	            }
	        }
	        //for any other dimensions
	        else
	        {
	            for(long long int i=0;i<=N-l;i++)
	            {
	                for(long long int j=0;j<=M-l;j++)
	                {
	                    long long int sum=0;
	                    //Calculate sum of submatrix with dimension l.....
	                    for(long long int k=j;k<j+l;k++)
	                    {
	                        for(long long int p=i;p<i+l;p++)
	                        {
	                            sum=sum+A[p][k];
	                        }
	                    }
	                     double avg=(double) sum/(l*l);
	                    if(avg>=K) 
	                    {
	                        val=val+M-l+1-j;
	                        break;
	                    }
	                }
	            }
	
	        }
	        
	    }
	   cout<<val<<endl;
	}
	return 0;
}
