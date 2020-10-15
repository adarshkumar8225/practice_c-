#include <iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>

using namespace std;
//function to remove adjacent duplicates.
void Remove_adjacent(string str)
{
    int k,i,j,n=str.size(),flag=1;
    vector<int> v;//it stores the start and end index of all the adjacent duplicates which need to be reoved.
    for(i=0,j=1;j<n;j++)
    {
        //if its the first different element after co0ntinuous duplicates.
        if((str[i]!=str[j] ) && flag==0)
        {
            v.push_back(i);
            v.push_back(j);
            //cout<<i<<"  "<<j<<endl;
            i=j;
            flag=1;
            continue;
        }
        //if non duplicates just increment i.
        if(str[i]!=str[j] && flag==1)
        {
            i++;
            continue;
        }
        //if duplicates set flag=0.
        if(str[i]==str[j])
        {
            flag=0;
        }
    }
    //if duplicates at the end then remove them first
    if(flag==0) str.erase(i,j-i);
    int m=v.size();
    //read from the vector and start erasing duplicates from end side.
   //even index of vector keeps start index and odd index keeps end index which is to be removed.
    for(int l=m-1;l>=1;l-=2)
        {
            //cout<<k<<"  "<<l-k<<endl;
            str.erase(v[l-1],v[l]-v[l-1]);
        }
    // size of vector 0 means no duplicates are present.
    //it implies no duplicates are present so just print str.
    if(v.size()==0) {
        cout<<str<<endl;
        return;
    }
    //else put recursive call.
    else {
        Remove_adjacent(str);
    }
 
}


int main() {
	//code
	int t,i;
	string str;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>str;
	    Remove_adjacent(str);
	}
	return 0;
}
