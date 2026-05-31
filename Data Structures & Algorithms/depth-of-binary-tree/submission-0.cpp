/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
int height(TreeNode* root){
    if(root == NULL)
    return 0;
    int h1=0, h2=0;
    if(root -> left) 
    h1 = 1+height(root->left);

    if(root -> right) 
    h2 = 1+height(root->right);

    return max(h1,h2); 

    
}
    int maxDepth(TreeNode* root) {
        if(root == NULL)
        return 0;
        
        int depth=height(root)+1;
        return depth;
    }
};
