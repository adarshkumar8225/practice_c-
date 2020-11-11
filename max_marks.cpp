#include <iostream>
#include<bits/stdc++.h>

using namespace std;



int main()
{
    int N,M;//N no. of questions, M time required
    
    cin>>N;
    cin>>M;
    int i,A[2*N],marks=0,index;
    float ratio[N],max=0.0;
    for(i=0;i<2*N;i=i+2)
    {
        cin>>A[i]>>A[i+1];
       // ratio[i]=float(A[i]/A[i+1]);
    }
    int j=0;
    for(i=0;i<2*N;i=i+2)
    {
            ratio[j]=float(A[i])/A[i+1];
            cout<<ratio[j]<<" ";
            j++;
    }
    while(M>0)
    {
        max=0.0;
        for(i=0;i<N;i++)
        {
            if(ratio[i]>max)
            {
                max=ratio[i];
                //cout<<max<<"  ";
                index=i;
            }
        }
        ratio[index]=0.0;
        index=index*2;
        if(M>=A[index+1])
        {
            M=M-A[index+1];
            marks=marks+A[index];
        }
    }
    cout<<endl;
    cout<<marks;
    return 0;
}
