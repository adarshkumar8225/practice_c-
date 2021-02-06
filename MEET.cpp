

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

//convert the time into 24 hr clock and return corresponding float value
//ex: 11:59 PM returns 23.59, 12:01 AM returns 0.01,.....

float convert_to_24(string s1,string s2)
{
    string hour,minute;
    //seperate hour and minute from string
    string word="";
    for(auto x: s1)
    {
        if(x==':') 
        {
            hour=word;
            word="";
        }
        else 
            word=word+x;
    }
    minute=word;
    //generate corresponding float value.
    float value=(float)stoi(hour)+(float)stoi(minute)/100;
   
    // based on AM or PM the final value is generated.
    string s="AM";
    
    //when the given time is in AM
    if(s2==s)
    {
        //if time in AM and hour is 12 then in 24 hrs clock it becomes 00
        // ex : 12:45 AM becomes 00.45 in 24 hr clock
        //for hour other than 12 it is same as 12 hr clock.
        if(hour=="12") value=value-stoi(hour);
        
    }
    
    //when the given time is in PM.
    else
    {
        //when time is PM and hour is not equal to 12 then add 12 to the value.
        //as 12:45 PM remains 12.45 in 24 hr clock 
        // other than 12 such as 10:34 PM becomes 22:34
        if(hour!="12") value=value+12.00;
        
    }
    // cout<<value<<"   ";
    return value;
}

//boolean function to check whether meeting can be attained
bool check(string s1,string s2,string start_s1,string start_s2,string end_s1,string end_s2)
{
    //each of the time is converted to 24 hr clock
    float value=convert_to_24(s1,s2);
    float start=convert_to_24(start_s1,start_s2);
    float end=convert_to_24(end_s1,end_s2);
    if(value>=start && value<=end) return 1;
    else return 0;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{ 
	    string str1,str2;
	    cin>>str1>>str2;
	    
	    int N;
	    cin>>N;
	    string start_str1,start_str2,end_str1,end_str2;
	    while(N--)
	    {
	        cin>>start_str1>>start_str2>>end_str1>>end_str2;
	        cout<<check(str1,str2,start_str1,start_str2,end_str1,end_str2);
	        
	    }
	    cout<<endl;
	}
	return 0;
}
