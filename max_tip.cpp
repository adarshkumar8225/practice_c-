//problem asked in amazon. there are only two waiter in a restaurant. one can take X order and other can take Y order at max.
// one waiter can serve to single order. there are two array of tips onr for 1 waiter and other for 2 nd waiter corresponding to each order.
//find the maximize sum of tip two waiter can get.
//INPUT
// t  : no. of testcases.
// N X Y : N=no. of order, X=max order waiter 1 can take, Y=max order waiter 2 can take.
//array :A :tip for each order to waiter 1.
//array :B : tip for each order to waiter 2.

#include <iostream>

using namespace std;
//function returning the index of maximum element....
int max_index(int M[],int n)
{
    int max=0,max_i=0;
    for(int i=0;i<n;i++)
    {
        if(M[i]>=max) {
            max=M[i];
            max_i=i;
        }
    }
    return max_i;
}

int main() {
	//code
	int t,N,X,Y,p,q,z;

	cin>>t;
	//iterate for number of test cases....
	for(int i=0;i<t;i++)
	{
	    int sum=0;
	    cin>>N>>X>>Y;
	    int r=N;
	    int A[N];
	    int B[N];
	    for(int j=0;j<N;j++) {
	        cin>>z;
	        A[j]=z;
	    }
	    for(int j=0;j<N;j++) {
	        cin>>z;
	        B[j]=z;
	    }
	    int k=0;
	    //CASE1::when N==X+Y.!!!!!!!!!!!!!!!!!!...............!!!!!!
	    if(N==(X+Y))
	    {
	        //while loop run till number of order becomes 0.
	    while(r)
	    {
	        //when X and Y both can take order...
	        if(X>0 && Y>0)
	        {
	            p=max_index(A,N);
	            //choose max of two element at index p in array A and B.
	            if(A[p]>=B[p])
	            {
	                sum=sum+A[p];
	                X--;
	                r--;
	                A[p]=0;
	                B[p]=0;
	                
	            }
	            else
	            {
	                sum=sum+B[p];
	                Y--;
	                r--;
	                B[p]=0;
	                A[p]=0;
	               
	            }
	        }
	        //X can take order but Y cannot.
	        else if(X>0 && Y<=0)
	        {
	            p=max_index(A,N);
	            sum=sum+A[p];
	            X--;
	            r--;
	            A[p]=0;
	            B[p]=0;
	        }
	        // Y can take order but X cannot.
	        else if(X<=0 && Y>0)
	        {
	            q=max_index(B,N);
	            sum= sum+B[q];
	            Y--;
	            r--;
	            B[q]=0;
	            A[q]=0;
	        }
	    }
	    }
	    //when X+Y > N.....!!!!!!!!!!!!!!!!!!...............!!!!!!!!!!!!
	    else
	    {
	        //iterate for total number of order.
	        while(r)
	        {
	            // both X and Y can take order..
	            if(X>0 && Y>0)
	            {
	                p=max_index(A,N);
	                q=max_index(B,N);
	                //if max of both array at same place then choose max value.
	                if(p==q)
	                {
	                    if(A[p]>=B[p]){
	                        sum=sum+A[p];
	                        X--;
	                        r--;
	                        A[p]=0;
	                        B[p]=0;
	                    }
	                    
	                    else {
	                        sum=sum+B[p];
	                        Y--;
	                        r--;
	                        A[p]=0;
	                        B[p]=0;
	                    }
	                }
	                //else if possible you can include both value
	                else
	                {
	                    sum=sum+A[p];
	                    X--;
	                    r--;
	                    A[p]=0;
	                    B[p]=0;
	                    if(r>0)
	                    {
	                        sum=sum+B[q];
	                        Y--;
	                        r--;
	                        A[q]=0;
	                        B[q]=0;
	                    }
	                }
	                
	            }
	            else if(X>0 && Y<0)
	            {
	                p=max_index(A,N);
	                sum=sum+A[p];
	                X--;
	                r--;
	                A[p]=0;
	                B[p]=0;
	            }
	            else if(X<0 && Y<0)
	            {
	                p=max_index(B,N);
	                sum=sum+B[p];
	                Y--;
	                r--;
	                A[p]=0;
	                B[p]=0;	                
	            }
	            }
	        }
	     cout<<endl<<sum<<"  ";    
	    }

	  

	return 0;
}
