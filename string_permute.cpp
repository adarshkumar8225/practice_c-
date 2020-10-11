#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void permutation(string str,int l,int r)
{
    if(l==r) cout<<str<<" ";
    else
    {
        for(int i=l;i<=r;i++)
        {
            swap(str[i],str[l]);
            permutation(str,l+1,r);
        }
        //permutation(str,l+1,r);
    }
    
}

int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    string str;
	    cin>>str;
	    sort(str.begin(),str.end());
	    int n=str.size()-1;
	    permutation(str,0,n);
	    cout<<endl;
	    
	}
	return 0;
}

