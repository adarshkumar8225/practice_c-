


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool match(string word,vector<string> v)
{
    for(int i=0;i<v.size();i++)
    {
        if(word.compare(v[i])==0) return 1;
    }
    return 0;
}


void solution(string s,vector<string> v)
{
    string word="";
    int flag=0;
    static string str;
    for(int i=0;i<s.size();i++)
    {
        word=word+s[i];
        if(match(word,v))
        {
            flag=1;
            str=str+word+" ";
            solution(s.substr(i+1),v);
        }
        
        
    }
    if(flag==0) cout<<"("<<str<<")"<<" ";
    str="";
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    vector<string> v;
	    int n;
	    string str,s;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>str;
	        v.push_back(str);
	    }
	    cin>>s;
	    solution(s,v);
	}
	return 0;
}
