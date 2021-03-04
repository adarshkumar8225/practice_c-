//Find the height of binary tree
// Problem Link--> https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1#

    int height(struct Node* node){
        // code here 
        if((node)==NULL)
        {
            return 0;
        }
        
        int left=height(node->left);
        int right=height(node->right);
        int h=max(left,right)+1;
        return h;
    }
