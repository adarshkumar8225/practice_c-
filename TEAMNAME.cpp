

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int calculate(vector<string> v,string str1,string str2)
{
    char temp=str1[0];
    str1[0]=str2[0];
    str2[0]=temp;
    int p,q;
    //cout<<str1<<str2;
    if(find(v.begin(),v.end(),str1)==v.end()) p=0;
    else p=1;
    if(find(v.begin(),v.end(),str2)==v.end())  q=0;
    else q=1;
    if(p==1 || q==1) return 0;
    return 2;
}

bool compare(string a, string b) 
{
    if(a<b) return(1);
    else return 0;
}
int team_name(vector<string> v)
{
    int count=0;
    

    
    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            string str1=v[i];
            string str2=v[j];
            if(str1[0]!=str2[0])
            count=count+calculate(v,v[i],v[j]);
        }
    }
    

    return count;
}


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin>>N;
	    string str;
	    vector<string> v;
	    for(int i=0;i<N;i++)
	    {
	        cin>>str;
	        v.push_back(str);
	       // for(auto x:str) if(x!='a' && x!='b') { v.clear() ; break;}
	    }
	    cout<<team_name(v)<<endl;
	}

	return 0;
}
