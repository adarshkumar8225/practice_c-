#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t,N,K,X,Y,p;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    //cout<<"hello"<<endl;
	    cin>>N>>K>>X>>Y;
	    p=X;
	    X=(X+K)%N;
	    while(X!=p)
	    {
	        if(X==Y)
	        {
	            cout<<"YES"<<endl;
	            break;
	        }
	        else
	        {
	            //cout<<X<<endl;
	            X=(X+K)%N;
	        }
	        
	    }
	    if(X==p)
	    {
	        cout<<"NO"<<endl;
	    }
	}
	//cout<<"Hi"<<endl;
	return 0;
}
