#include <iostream>
#include<string>
#include<math.h>
using namespace std;
//set of string which are keyword for this problem...................................

string str1[]={"break","case","continue","default","defer","else","for","func","goto","if","map","range","return","struct","type","var"};

int keyword(string str)
{
    int j;
    for(j=0;j<16;j++)
    {
        if(str1[j].compare(str)==0)
        {
            return 1;
        }
    }
    return 0;

}
int main()
{
    string str;
    cin>>str;
    int p=keyword(str);
    if(p==0) cout<<str<<"  not a keyword"<<endl;
    else cout<<str<<"  is a keyword";
}

