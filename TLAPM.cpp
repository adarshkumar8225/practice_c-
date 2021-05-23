#include <iostream>
using namespace std;

int fun(int n,int d, int a)
{
    return (n*n+(2*d-3)*n+2*(a+1-d))/2;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x1,x2,y1,y2;
	    cin>>x1>>y1>>x2>>y2;

	   int a;
	   a=((y1)*(y1)-(y1))/2+1;
	   int d;
	   d=1+y1;

	   int sum=0;
	   for(int n=x1;n<=x2;n++)    sum=sum+fun(n,d,a);
	   
	    a=(x2*x2+x2)/2;
	    d=x2;
	    
	    for(int n=y1+1;n<=y2;n++) sum=sum+fun(n,d,a);
	    

	    
	    cout<<sum<<endl;
	}
	return 0;
}
