//April Long Challenge --> https://www.codechef.com/APRIL21C/problems/SDICE

// Maximum sum of numbers on visible faces of dice stack.


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    long long unsigned int sum=0;
	    long long int N;
	    cin>>N;
	    long long unsigned int v=N/4;
	    sum=(sum+v*44);
	    int r=N%4;
	    switch(r)
	    {
	       case 0 : if(v>0)sum=sum+16;
	                break;
	       case 1 : sum=sum+20;
	                if(v>0) sum=sum+12;
	                break;
	       case 2 : sum=sum+36;
	                if(v>0) sum=sum+8;
	                break;
	       case 3 : sum=sum+51;
	                if(v>0) sum=sum+4;
	                break;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
