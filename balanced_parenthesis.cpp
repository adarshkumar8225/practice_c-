bool ispar(string x)
    {
        // Your code here
        stack<char> s;
        for(auto c: x)
        {
            if(c=='(' || c=='{' || c=='[') s.push(c);
            else if(s.empty()) return 0;
            else
            {
                if(!s.empty()&&((s.top()=='(' && c==')')||(s.top()=='{' && c=='}')||(s.top()=='[' && c==']')))
                s.pop();
                else return 0;
            }
        }
        if(s.empty()) return 1;
        else return 0;
    }
