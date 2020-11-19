#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
//keep track which iron is already attracted by any magnet
vector<int> v;

int calculate_val(string str,int i,int j,int K)
{
    int l,s=0,sum;
    for(l=i+1;l<j;l++)
    {
        if(str[l]==':') s=s+1;
    }
    sum=K+1-abs(i-j)-s;
    if(sum>0) return 1;
    else return 0;  
}


int value(string str,int i,int p,int j,int K)
{
    int x,z,q;
    for(x=max(i,v[v.size()-1]+1);x<=j;x++)
    {
        if(str[x]=='I')
        {
            q=x;
            if(x>p)
            {
                x^=p;
                p^=x;
                x^=p;
            }
            z=calculate_val(str,x,p,K);
            if(z==1)
            {
                v.push_back(q);
                return 1;
            }
        }
    }
    return 0;  
}


int calculate(string str,int i,int j,int K)
{
    int p,z,count1=0;
    if(v.size()==0) v.push_back(-1);
    for(p=i;p<=j;p++)
    {

        if(str[p]=='M')
        {
            z=value(str,i,p,j,K);
            if(z==1) count1++;

        }
    }
    return count1;
 
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int N,K,m,i,j;
       cin>>N>>K;
       string str;
       cin>>str;
       int count=0, flag=0,f;
       for(i=0,m=0;m<N;m++)
       {
           //whenever get a X pass the subarray before X to the function.. 
           if(str[m]=='X')
           {
               //if attracted return 1 thus increment the count
               
               f=calculate(str,i,m-1,K);
               count=count+f;
               i=m+1;
               
           }
           else if(m==N-1)
           {
               f=calculate(str,i,m,K);
               count=count+f;
           }
       }
       cout<<count<<endl;
       v.clear();
    }
}


