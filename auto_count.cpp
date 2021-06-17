
// Problem Statement-------------------------------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//a string whose first digit gives count of 0s in string 2nd digit gives count of 1 in string and so on
//ex: 1210 (no. of 0 is 1, no. of 1 is 2, no. of 2 is 1 and no. of 3 is 0)
//return no. of distinct digit in string.
//if above condition fails return 0.


#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int findautocount(string s)
{
    //string s=str;
    if(s.empty()) return 0;
    unordered_map<int,int> m;
    for(int i=0;i<s.length();i++) 
    {
        int v=(int) s[i]-48;
        m[v]++;
    }
    for(auto itr=m.begin();itr!=m.end();itr++) cout<<itr->first<<" "<<itr->second<<endl;
    int size=m.size();
    for(int i=0;i<s.length();i++)
    {
       
        int v=(int) s[i]-48; 
        
        if(v!= m[i]) return 0;
    }

    return size;
}

int main()
{
    string str;
    cin>>str;
    cout<<findautocount(str);

    return 0;
}
