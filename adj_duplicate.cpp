#include <iostream>
#include<string>

using namespace std;

void Remove_adjacent(string str)
{
    int i,j,n=str.size(),flag=1;
    for(i=0,j=1;j<n;j++)
    {
        if((str[i]!=str[j] ) && flag==0)
        {
            str.erase(i,j-i);
            break;
        }
        if(str[i]!=str[j] && flag==1)
        {
            i++;
            continue;
            
        }
        if(str[i]==str[j])
        {
            flag=0;
        }
    }
    if(j==n && flag==0)
    {
        str.erase(i,j-i);
        cout<<str<<endl;
        return;
    }
    else if(j==n && flag==1)
    {
        cout<<str<<endl;
        return;
    }

    else Remove_adjacent(str);
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
