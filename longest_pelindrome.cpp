//print The longest possible pelindrome in the string.
//first have found the substring and then check whether a pelindrome or not.
//if pelindrome then check if its length is larger then previous pelindrome length.
//finally we get the longest possible pelindrome substring of given string.

#include <iostream>
#include<string>
using namespace std;

int main() {
	//code
	int t,i,k,j,m,x;
	string str;
	cin>>t;
	for(x=0;x<t;x++)
	{
	    cin>>str;
	    int max_length=1;
	    int start=0,end=0;
	    //2 nested loop to form substring start_index=i end_index=j
	    for( i=0;i<str.size();i++)
	    {
	        for( j=i;j<str.size();j++)
	        {
	            int flag=1;//if flag 1 then it shows that it is a pelindrome.
	            //loop to check substring between index i and j is a pelindrome. 
	            for(k=i, m=0;k<=(i+j)/2;k++)
	            {
	                //if not equal then set flag=0 showing not a pelindrome.
	                if(str[i+m]!=str[j-m])
	                {
	                    flag=0;
	                    break;
	                }
	                m++;
	            }
	            //if it is a pelindrome then find the max length pelindrome.
	            if(flag==1 && (j-i+1)>max_length)
	            {
	                max_length=j-i+1;
	                start=i;
	                end=j;
	            }
	        }
	    }
	    //print longest pelindromic substring.
	    for(i=start;i<=end;i++)
	    {
	        cout<<str[i];
	    }
	    cout<<endl;
	}
	return 0;
}
