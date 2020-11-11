#include <iostream>

using namespace std;

int main()
{
    int dimension;
    cin>>dimension;
    int A[dimension][dimension];
    int i,j,sum1=0,sum2=0;
    for(i=0;i<dimension;i++)
    {
        for(j=0;j<dimension;j++)
        {
            cin>>A[i][j];
        }
    }
    
    for(i=0;i<dimension;i++)
    {
        sum1=sum1+A[i][i];
    }
    for(i=0,j=dimension-1;i<dimension;i++,j--)
    {
        sum2=sum2+A[i][j];
    }
    cout<<abs(sum1-sum2);
    
    return 0;
}
