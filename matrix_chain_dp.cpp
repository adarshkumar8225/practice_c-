//Matrix Chain multiplication using Dynamic Programming>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

#include <iostream>
#include<bits/stdc++.h>
#define inf 35000

using namespace std;
//memory to store the result
int value[100][100];


//function to find the minimum number of multiplication
int matrix_chain(int dim[],int i,int j)
{
    //if already computed then no need to compute again 
    //just return the value.
    if(value[i][j]!=-1) return(value[i][j]);
    if(i==j) value[i][j]=0;
    else
    {
        value[i][j]=inf;//set the value to infinity
        for(int k=i;k<j;k++)
        {
            //recursive equation to find minimum no. of multiplication..
            int q=matrix_chain(dim,i,k)+matrix_chain(dim,k+1,j)+dim[i-1]*dim[k]*dim[j];
            //if computed value is less than previous value then store the computed value
            if(q<value[i][j]) value[i][j]=q;
        }
        
        return value[i][j];
    }
}

int main()
{
    int n,i,j;//number of matrices to be multiplied.
    cin>>n;

    int dimension[n+1];
    //dimension of n matrix.
    for(i=0;i<=n;i++)
    cin>>dimension[i];
    //initialize the 2d array with value -1..........
    memset(value, -1, sizeof(value[0][0]) * 100 * 100);
    //call the function to get the minimum value
    j=matrix_chain(dimension,1,n);
    cout<<j<<endl;
    
    return 0;
}
