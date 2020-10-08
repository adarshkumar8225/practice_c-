#include <iostream>
#include<vector>
using namespace std;
//with int type we can print only upto 47 terms.
//with long long type we can print upto 92 terms correctly.
//for more terms use unsigned long long type for more than 92 terms.
vector<long long> fib(84,0);

long long fibonacci(int n)
{
    
    if(n==0)
    {
        return 0;
    }
    //fib[n]!=0 means we have already calculated so no need to calculate again.
    //used dynamic programming approach.
    if(fib[n]!=0) return(fib[n]);
    else
    {
        if(n==1) 
        {
            fib[n]=1;
            return 1;
         }
        else
        {
            fib[n]=fibonacci(n-1)+fibonacci(n-2);
            return(fib[n]);
        }
    }
}

int main() {
	//code
	int n,t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    for(int j=1;j<=n;j++)
	       cout<<fibonacci(j)<<" ";
        cout<<endl;
	}
	return 0;
}
