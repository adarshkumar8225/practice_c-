#include <iostream>
using namespace std;

void Replace(int A[],int P[],int N)
{
    int B[N];
    for(int i=0;i<N;i++)
    {
        B[P[i]-1]=A[i];
    }
    for(int i=0;i<N;i++) A[i]=B[i];
    
}


void swap(int A[],int x,int y)
{
    int temp=A[x-1];
    A[x-1]=A[y-1];
    A[y-1]=temp;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin>>N;
	    int A[N],P[N];
	    for(int i=0;i<N;i++) cin>>A[i];
	    for(int i=0;i<N;i++) cin>>P[i];
	    int q;
	    cin>>q;
	    for(int i=0;i<q;i++)
	    {
	        int op_type;
	        cin>>op_type;
	        switch(op_type)
	        {
	            case 1 : Replace(A,P,N);
	                     break;
	            case 2 : int x,y;
	                     cin>>x>>y;
	                     swap(A,x,y);
	                     break;
	           case 3 : int v;
	                    cin>>v;
	                    cout<<A[v-1]<<endl;
	                    break;
	        }
	    }
	}
	return 0;
}
