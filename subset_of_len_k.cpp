

//print all the subset of a string which is having length equal to k

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void subset(string str,int index,int k,string curr)
{
    if(index==str.length())
    {   
        if(curr.length()==k)
        cout<<"("<<curr<<")"<<" ";
        return;
    }
    else
    {
        subset(str,index+1,k,curr);
        subset(str,index+1,k,curr+str[index]);
        
    }
}

int main()
{
    string str,curr="";
    cin>>str;
    int k;
    cin>>k;
    //function to generate all subsets of length k
    subset(str,0,k,curr);
    
    
}
