// April Long Challenge--> https://www.codechef.com/APRIL21C/submit/MEXSTR



#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Check if str2 is subsequence of str1...........
bool subsequence(string str1,string str2)
{
    for(long long int i=0,j=0;i<str1.size();i++)
    {
        if(str2[j]==str1[i]) j++;
        if(j==str2.size()) return 1;
    }
    return 0;
}
//integer to binary conversion..................
string int_to_bin(long long int i)
{
    string str="";
    while(i>=2)
    {
        if(i%2)
        str=str+'1';
        else str=str+'0';
        i=i/2;
    }
    if(i%2)
    str=str+'1';
    else str=str+'0';
    reverse(str.begin(),str.end());
    return str;
}


int main() {
	// your code goes here
	long int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    long long int i=0;
	    while(1)
	    {
	        string bin=int_to_bin(i);
	        if(!subsequence(str,bin))
	        {
	            cout<<bin<<endl;
	            break;
	        }
	        i++;
	    }
	}
	return 0;
}
