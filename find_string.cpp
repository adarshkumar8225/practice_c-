#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    //cin>>str;
    string str2;
    cin>>str2;
    
    vector<int > v;
    int index=str.find(str2);
    while(index!=-1)
    {
        v.push_back(index);
        index=str.find(str2,index+1);
    }
    for(auto x: v) cout<<x<<"  ";

    return 0;
}
