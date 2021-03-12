// Problem Link->>>> https://practice.geeksforgeeks.org/problems/common-elements1132/1#


      vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> v;
            //map used to store all element as key and its frequency as value.
            unordered_map<int,int> m1,m2,m3;
            //all element of array A is stored as key in map m1..
            for(int i=0;i<n1;i++) m1[A[i]]++;
            //all element of array B is stored as key in map m2..
            for(int i=0;i<n2;i++) m2[B[i]]++;
            //all element of array C is stored as key in map m3..
            for(int i=0;i<n3;i++) m3[C[i]]++;
            
            for(int i=0;i<n1;i++)
            {
                //if A[i] is also present in B and C then it must be a key in
                // m2 and m3 respectively.... so it will give non zero values
                //if not present it will give zeros 
                // Also check if A[i] is inserted earlier then dont insert it again
                // so use find() function
                if(m2[A[i]] && m3[A[i]]&& find(v.begin(),v.end(),A[i])==v.end()) v.push_back(A[i]);
            }
            return v;
        }
