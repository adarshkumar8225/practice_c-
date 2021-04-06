//Problem Statement-->> 
// Check whether result string is suffle of the two strings or not.
//Can't deal with common characters
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool isSubsequence(string str,string result)
{
    for(int i=0,j=0;i<result.size();i++)
    {
        if(str[j]==result[i]) j++;
        if(j==str.size()) return 1;
        
    }
    return 0;
}

bool isSuffle(string str1,string str2,string result)
{
    return(isSubsequence(str1,result) && isSubsequence(str2,result));
}


int main()
{
    string str1,str2,result;
    cin>>str1>>str2>>result;
    
    cout<<isSuffle(str1,str2,result);

    return 0;
}
