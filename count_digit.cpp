
//count number of occurrence of consecutive digit then output the count and digit of each digit as string
#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    string s;
    cin>>s;
    char c=s[0];
    vector <int> v;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==c)
        {
            count++;
        }
        else
        {
            v.push_back(count);
            v.push_back(c-'0');
            count=0;
            c=s[i];
            i=i-1;
        }
    
    }
    v.push_back(count);
    v.push_back(c-'0');
    for(int i=0;i<v.size();i++) cout<<v[i];
    return 0;
}
