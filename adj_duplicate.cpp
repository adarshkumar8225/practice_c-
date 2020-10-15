    #include <iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>

using namespace std;
//function to remove adjacent duplicates.
void Remove_adjacent(string str)
{
    int i,j,n=str.size(),flag=1;
    vector<int> v;//it stores the start and end index of all the adjacent duplicates.
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
    for(int k=m-2,l=m-1;l>0;k-=2,l-=2)
        {
            //cout<<k<<"  "<<l-k<<endl;
            str.erase(v[k],v[l]-v[k]);
        }
    v.clear();//clear the vector.
    flag=1;
    //check if all the adjacent duplicates is removed or not.
    for(int k=0;k<str.size()-1;k++)
    {
        if(str[k]==str[k+1]) {
            flag=0;
            break;
        }
    }
    //it implies no duplicates are present so just print str.
    if(flag==1) {
        cout<<str<<endl;
        return;
    }
    //else put recursive call.
    else {
        Remove_adjacent(str);
        
    }
    return;
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
