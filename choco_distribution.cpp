//chocolate distribution problem link:: https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem/0#


#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	//code
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    int n,j,m;
	    cin>>n;
	    int A[n];
	    for(j=0;j<n;j++)
	    {
	        cin>>A[j];
	    }
	    cin>>m;
      //sorted the array
	    sort(A,A+n);
	    int k,min=A[m-1]-A[0];
      //return the min difference between maximum chocolate packet and min chocolate packet
	    for(k=0,j=m-1;j<n;k++,j++)
	    {
	        
	        if((A[j]-A[k])<min)
	        {
	            min=A[j]-A[k];
	        }
	        
	    }
	    cout<<min<<endl;
	}
	return 0;
}
