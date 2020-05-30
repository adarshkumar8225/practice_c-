#include <sstream>
#include <vector>
#include <iostream>
#include<cstring>
using namespace std;

vector<int> parseInts(string str) {  //return type is vector.
	// Complete this function
    vector<int> v;
    int i,a,count=0;
    char c;
    char ch[str.size()];
    stringstream ss(str);// predefined class used to seperate int from string.
    for(i=0;i<str.size();i++)
    {
         if(str.substr(i,1)==",") count++; //count no. of comma as no. od integer is one more the no. of comma.
    }
    for(i=0;i<=count ;i++)
    {
         ss>> a>>ch[i];
         v.push_back(a);//function to push back(insert) element in vector.
    }
    //cout<<str.size()/2<<endl;
    return v;

}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
