// April Long Challenge Codechef --> https://www.codechef.com/APRIL21C/problems/BOLT
//Here we have to basically compare the floating point numbers......................

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	float k1,k2,k3,v;
	int t;
	cin>>t;
	while(t--)
	{
     	cin>>k1>>k2>>k3>>v;
	    float speed=k1*k2*k3*v;
	    float val=(float)100/speed;
        //round off value upto 2 decimal places.........
	    float value = (int)(val* 100 + .5);
        value=(float)value / 100;
        //if value greater than or equal to 9.58 then print "No" else print "Yes".....
        //here 0.0000001 is the epsilon value which is used to check the equality of floating number
        //if difference is less than 0.0000001 it means they are much closer so can be considered as equal;
        if(value>9.58  || abs(value-9.58)<=0.0000001) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
	}
	return 0;
}
