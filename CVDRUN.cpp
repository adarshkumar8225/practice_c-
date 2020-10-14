

#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t,N,K,X,Y;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>N>>K>>X>>Y;
	    int A[N]={0};//initialize to 0;
	    while(A[X]!=1)// continue move in the circle till we reach already visited city.
	    {
	        A[X]=1;//the city visited its value will be set to 1.
	        X=(X+K)%N;//jump to k step.
	    }
        if(A[Y]==1)cout<<"YES"<<endl;//if destination is visited it will set to 1.
        else cout<<"NO"<<endl;
	}
	return 0;
}


}
