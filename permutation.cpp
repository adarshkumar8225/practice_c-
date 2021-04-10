//Problem Link--> https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1#

//Find all permutation of given string in lexicographical order

	//function to find permutation
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> v,v1;
		    v.push_back(S);//Take the string in vector v initially.
		    string str,str1;
		    
		    for(int i=0;i<S.size()-1;i++)
		    {
		        v1.clear();
		        //Take all the vector element of v one by one for swapping.
		        for(int k=0;k<v.size();k++)
		        {
		            str1=v[k];
		           
		            for(int j=i;j<S.size();j++)
		            { 
		                str=str1;
		                char temp=str[i];
		                str[i]=str[j];
		                str[j]=temp;
		                v1.push_back(str);//store all possible permutation in v1.
		            }
		        }
		        v.clear();
		        v=v1;//Now obtained permutation is used for further permutation.

		    }
		    //Last permutation will keep all possible permutation 
		    //Sort string in lexicographical order.
		    sort(v1.begin(), v1.end());
		    return v1;
		}
