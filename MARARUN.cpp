#include <stdio.h>
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--)
	{
	    int D,d,A,B,C;
	    cin>>D>>d>>A>>B>>C;
	    int product=D*d;
	    if(product<10) cout<<0;
	    else if(product>=10 && product <21) cout<<A;
	    else if(product >=21 && product <42) cout<<max(A,B);
	    else 
	    {
	        if(A>B)
	        {
	            if(A>C) cout<<A;
	            else cout<<C;
	        }
	        else
	        {
	            if(B>C) cout<<B;
	            else cout<<C;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
