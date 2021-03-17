//Problem Statement: For a given array of length n, divide it into subarray of length k, now if an element x is present in every subarray 
//then print Possible otherwise print not possible.
//example-->> N=8, x=5 , k=3 ,arr=[4,2,5,1,2,5,4,5] output--> Possible
//example-->> N=8, x=5 , k=3 ,arr=[4,2,5,1,2,6,4,5] output--> Not Possible


#include <iostream>

using namespace std;

int main()
{
    int N,x,k,flag=0;
    cin>>N>>x>>k;
    int arr[N];
    for(int i=0;i<N;i++) cin>>arr[i];
    
    for(int i=0;i<N;i++)
    {
        if(arr[i]==x) flag=1;
        if(i%k==k-1 || i==N-1)
        {
            if(flag==0) 
            {
                cout<<"Not Possible";
                return 0;
            }
            else
            {
                flag=0;
            }
        }
    }
    cout<<"Possible";
    return 0;
}
