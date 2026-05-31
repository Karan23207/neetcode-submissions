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
    
    return max(1+height(root->left) , 1+height(root->right));

}
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
        return true;

        int opt1= isBalanced(root->left);
        int opt2= isBalanced(root->right);
        int opt3= abs(height(root->left) - height(root->right));

        if(opt1 && opt2 && opt3<= 1) return true;
        else return false;
    }
};
