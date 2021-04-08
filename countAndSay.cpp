//Problem Link--> https://leetcode.com/problems/count-and-say/submissions/



    string countAndSay(int n) 
    {
        string str1="1";
        n=n-1;
        while(n--)
        {
            string str="";
            char c=str1[0];
            int count=0;
           for(int i=0;i<str1.size();i++) 
           {
               if(c==str1[i]) count++;
               else
               {
                   str=str+to_string(count)+c;
                   c=str1[i];
                   count=0;
                   i--;
               }
           }
            str=str+to_string(count)+c;
            str1=str;
        }
        return str1;
    }

