#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
//keep track which iron is already attracted by any magnet
vector<int> v;

int value(string str,int i,int j,int K)
{
    int s=0,m,f;
    if(i>j)
    {
        i^=j;
        j^=i;
        i^=j;
    }
    //between iron and magnet check if X return 0
    //else count the number of colon between iron and magnet
    for(m=i;m<j;m++)
    {
        if(str[m]=='X') return 0;
        else if(str[m]==':') s++;
    }

    //calculate the power if >0 then return 1 else return 0
    f=K+1-abs(i-j)-s;
    if(f>0) return 1;
    else return 0;
    
}


int calculate(string str,int i,int K,int N)
{
    int p,j;
    if(v.size()==0) v.push_back(-1);
    for(p=v[v.size()-1]+1;p<N;p++)
    {
        /*if(str[p]=='I')
        {
            j=value(str,i,p,K);
            if(j==1)
            {
                v.push_back(p);
                return 1;
            }
            
        }*/
        if(str[p]=='I')
        {
            j=value(str,i,p,K);
            if(j==1)
            {
                v.push_back(p);
                return 1;
            }
        }
    }
    return 0;
    

    
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
       for(m=0;m<N;m++)
       {
           //whenever get a magnet find whether it can be attracted or not
           if(str[m]=='M')
           {
               //if attracted return 1 thus increment the count
               f=calculate(str,m,K,N);
               if(f==1)count++;
           }
       }
       cout<<count<<endl;
       v.clear();
    }
}

