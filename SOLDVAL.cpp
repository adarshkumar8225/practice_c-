#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int N;
        cin>>N;
        int A[N],F[N],i,j;
        for(i=0;i<N;i++)
        {
            cin>>A[i];
        }
        
            int min_v;
            for(i=0,j=0;i<N;j++)
            {
                
                
                if(i>j) F[j]=A[j]+(i-j);
                else F[j]=A[j]+(j-i);
                if(j==0) min_v=F[j];
                else if(min_v>F[j]) min_v=F[j];
                if(j==N-1)
                {
                    i++;
                    j=0;
                    cout<<min_v<<" ";
                    min_v=F[j]+abs(0-i);
                }
            }

        cout<<endl;
    }
}
