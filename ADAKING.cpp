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
        int k,i,j;

        cin>>k;
        k--;
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                if(i==0 && j==0)
                A[i][j]='O';
                else if(k>0)
                {
                    A[i][j]='.';
                    k--;
                }
                else
                A[i][j]='X';
            }
            
        }
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                cout<<A[i][j];
            }
            cout<<endl;
        }
       // cout<<endl;
        
    }
}
