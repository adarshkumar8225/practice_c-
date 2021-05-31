

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
	    long long int arr[N];
	    for(int i=0;i<N;i++) cin>>arr[i];
	    sort(arr,arr+N,greater<long long int>());
	    int j=0,p=K;
	    long long unsigned int chef1=0,chef2,twin=0;
	    while(p--)
	    {
	        //if(j>=(N-2)) break;
	        chef1=chef1+arr[j];
	        j=j+2;
	    }
	    p=K;
	    j=1;
	    while(p--)
	    {
	        twin=twin+arr[j];
	        j=j+2;
	    }
	    if(j<=N)
	    twin=twin+arr[j-1];
	    chef2=twin;
	    if(chef1>chef2) cout<<chef1<<endl;
	    else cout<<chef2<<endl;
	}
	return 0;
}
