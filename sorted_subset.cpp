
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void subset(string s,int i,vector<string> &v,string str)
{
    if(i==s.size())
    {
        v.push_back(str);
        return;
    }
    else
    {
        subset(s,i+1,v,str);
        subset(s,i+1,v,str+s[i]);
    }
}

bool sort_size(string s1,string s2)
{
    //if(s1.size()<s2.size()) return 1;
   // else return 0;
   return s1.size()<s2.size();
}

int main()
{
    string s;
    cin>>s;
    vector<string > v;
    string str="";
    subset(s,0,v,str);
    sort(v.begin(),v.end());
    sort(v.begin(),v.end(),sort_size);
    for(auto x: v) cout<<x<<"   ";

    return 0;
}
