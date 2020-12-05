//Problem Link :>>>>>>>>  https://practice.geeksforgeeks.org/problems/coin-piles/0# 



#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int N,K,i,count=0,diff;
	    cin>>N>>K;
	    int A[N];
	    for(i=0;i<N;i++) cin>>A[i];
	    for(i=0;i<N-1;i++)
	    {
	        if(abs(A[i]-A[i+1])>K)
	        {
	            diff=abs(A[i]-A[i+1]);
	            count=count+diff-K;
	            //if(A[i]>A[i+1]) A[i]=A[i]-(diff-K);
	            //else A[i+1]=A[i+1]-(diff-K);
	         //   if(i<N-2 && A[i+1]>A[i+2])
	            A[i+1]=A[i+1]-(diff-K);
	          //  else A[i]=A[i]-(diff-K);
	        }
	    }
	    

	    cout<<count<<endl;
	}
	return 0;
}
