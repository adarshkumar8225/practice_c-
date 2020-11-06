#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>

using namespace std;
int value(vector<int> v)
{
    int i;
    int sum=0;
    for(i=0;i<v.size();i++)
    {
        sum=sum+pow(10,i)*v[i];
    }
    return sum;
}

int permutation(int num1,int num2)
{
    int count=1,i,j;
    vector<int> v,v1;
    int A=num1,B=num2;
    while(A)
    {
        v.push_back(A%10);
        v1.push_back(A%10);
        A=A/10;
    }
    for(i=0;i<v.size()-1;i++)
    {
        for(j=i+1;j<v.size();j++)
        {
            v1=v;
            if(v[i]>v[j])
            {
                v1[i]^=v1[j];
                v1[j]^=v1[i];
                v1[i]^=v1[j];
                if(value(v1)>num1 && value(v1)<=num2) count=count+1;
            }
        }
        
    }
    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,first[10]={0},second[10]={0},i;

        cin>>A>>B;
        int num1=A,num2=B;
        if(num1==num2)
        {
            cout<<1<<endl;
            continue;
        }
        //store all digits of A in first array
        while(A)
        {
            first[A%10]=first[A%10]+1;
            
            A=A/10;
        }
        //store all digits of B in second array.........
        while(B)
        {
            second[B%10]=second[B%10]+1;
            B=B/10;
        }
        for( i=0;i<10;i++)
        {
            if(first[i]!=second[i]) 
            {
                cout<<0<<endl;
                break;
            }
            //cout<<first[i]<<second[i]<<" ";
        }
        if(i!=10) continue;
        else
        {
            cout<<permutation(num1,num2)<<endl;
        }
    }
}
