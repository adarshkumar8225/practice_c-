string Solution::solve(string A) 
{
    vector<string> v;
    string str="";
// Store all words of string in a vector with removing if extra spaces are present.

//flag is used to remove extra spaces in the string 
    int flag=0;
    for(auto x: A)
    {
        if(x==' ')
        { 
            if(flag==1)
            v.push_back(str);
            str="";
            flag=0;
        }
        else
        {
            str=str+x;
            flag=1;

        }
        
    }
    if(str!="")
    v.push_back(str);
    reverse(v.begin(),v.end());
    str="";
    for(int i=0;i<v.size()-1;i++)
    {
        str=str+v[i]+" ";
    }
    str=str+v[v.size()-1];
    return str;

}
