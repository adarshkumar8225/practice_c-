//Problem Link-->> 
//Print all subsequence of given string
// Take care of duplicate subsequence
//Ex- string="aaa" it should print {a aa aaa}
//Map is used to avoid print of same subsequence multiple times


#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void subsequence(string str,string str1,int i,unordered_map<string,int> &m)
{
    //static unordered_map<string,int> m;
    if(i==str.size())
    {
        //if current subsequence is already printed then 
        // no need to print it again.......
        if( m[str1]>=1)
        {
            return;
        }
        else
        {
            if(str1.size()!=0)
            cout<<str1<<" ";
            m[str1]=m[str1]+1;//increment the frequency of "str1 key" in the map
            
            return;
        }
    } 
    //recursive call without including current string
    subsequence(str,str1,i+1,m);
    //recursive call after including current string
    subsequence(str,str1+str[i],i+1,m);
    
    return;
}

int main()
{
    string str;
    cin>>str;
    string str1="";
    unordered_map<string,int> m;
    //map is used to remove duplicate subsequence print
    subsequence(str,str1,0,m);
    return 0;
}
