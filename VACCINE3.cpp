#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int G,P,Arr[10];
	    cin>>G>>P;
	    for(int i=0;i<10;i++) cin>>Arr[i];
	    
	    int sum=0;
	    for(int i=G;i<10;i++) sum=sum+Arr[i];
	    int val=sum/P;
	    int min=val+1;
	    int r=sum%P;
	    r=r+Arr[G-1];
	    int max;
	    if(r%P) 
	    {
	        max=val+1+r/P;
	    }
	    else max=val+r/P;
	    
	    cout<<min<<"  "<<max<<endl;
	}
	return 0;
}
