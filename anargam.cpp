#include <iostream>
#include<string>

using namespace std;

void anagram(string str1,string str2)
{
    int i,j;
    while(str1.size())
    {
        for(i=0,j=0;i<str2.size();i++)
        {
            if(str1[j]==str2[i])
            {
                j++;
                if(str1[j]!=str2[i])
                {
                    str1.erase(0,j);
                    str2.erase(i,j);
                    break;
                }
            }
        }
    }
    if( str2.size()==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
	//code
	int t,i;
	string str1,str2;
	for(i=0;i<t;i++)
	{
	    cin>>str1>>str2;
	    anagram(str1,str2);
	}
	return 0;
}
