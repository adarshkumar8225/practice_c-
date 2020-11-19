#include<iostream>
#include<vector>
#include<cstring>
#include<bits/stdc++.h>

using namespace std;
//keep track which iron is already attracted by any magnet
vector<int> v;

int value(string str,int i,int p,int j,int K)
{
    int x,z;
    for(x=max(i,v[v.size()-1]+1);x<=j;x++)
    {
        if(str[x]=='I')
        {
           //whenever we get a sheet we have added one more sheet therefore no need to count the sheet
           z=K+1-abs(x-p);
            if(z>0)
            {
                v.push_back(x);
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
       string str,str1;
       cin>>str;
       int count=0, flag=0,f;
        //whenever encounter a sheet add one more sheet
       for(i=0;i<str.length();i++)
       {
           if(str[i]==':') str1+=':';
           str1+=str[i];
       }
      // cout<<str1<<endl;
       for(i=0,m=0;m<str1.length();m++)
       {
           //whenever get a X pass the subarray before X to the function.. 
           if(str1[m]=='X')
           {
               //if attracted return 1 thus increment the count
               f=calculate(str1,i,m-1,K);
               count=count+f;
               i=m+1;  
           }
           else if(m==str1.length()-1)
           {
               f=calculate(str1,i,m,K);
               count=count+f;
           }
       }
       cout<<count<<endl;
       v.clear();
    }
}

