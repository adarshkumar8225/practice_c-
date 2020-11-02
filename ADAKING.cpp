#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char A[8][8];
        int k,i,j,m,n,rem;
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                A[i][j]='.';
            }
        }
        cin>>k;
        A[0][0]='O';
        if(k<=8)
        {
            m=1;
            
        }
        else if(k>8 && k<=16)
        {
            m=2;
        }
        else if(k>16 && k<=24)
        {
            m=3;
        }
        else if(k>24 && k<=32)
        {
            m=4;
        }
        else if(k>32 && k<=40)
        {
            m=5;
        }
        else if(k>40 && k<=48)
        {
            m=6;
        }
        else if(k>48 && k<=56)
        {
            m=7;
        }
        else if(k>56 && k<=64)
        {
            m=8;
        }
        rem=k%8;
        //A[m-1][rem]='X';
        if(m==8 && k==64)
        {
         for(i=0;i<8;i++)
          {
            for(j=0;j<8;j++)
            {
                cout<<A[i][j]<<" ";
            }
            cout<<endl;
          }
         cout<<endl;
            continue;
        }
        
        else if(m==8)
        {
            for(j=rem;j<8;j++)
            {
                A[m-1][j]='X';
            }
        }
        
        else
        {
            for(i=m-1;i<=m;i++)
            {
                for(j=0;j<8;j++)
                {
                    if(i==m-1 && j>=rem)
                    {
                        A[i][j]='X';
                    }
                    else if(i==m && j<=rem)
                    {
                        A[i][j]='X';
                    }
                }
            }
        }
        
        
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                cout<<A[i][j]<<" ";
            }
            cout<<endl;
        }
       // cout<<endl;
        
    }
}

