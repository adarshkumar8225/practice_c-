// April Long Challenge-->> 

// Find if K consecutive * are present in the string or not 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N,K;
	    cin>>N>>K;
	    string s;
	    cin>>s;
	    int count=0,flag=0,i;
	    for( i=0;i<N;i++)
	    {
	        if(s[i]=='*') count++;
	        //if K consecutive '*' then print YES and break. 
	        if(count==K) 
	        {
	            cout<<"YES"<<endl;
	            flag=1;
	            break;
	        }
	        if(s[i]!='*') count=0;
	    }
	    //if K consecutive * are not present then print NO
	    if(flag==0) cout<<"NO"<<endl;
	}
	return 0;
}
