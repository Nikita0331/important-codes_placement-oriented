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
    bool sym(TreeNode *root,TreeNode *root2){
          if(root==NULL && root2==NULL) return true;
          if(root==NULL || root2==NULL) return false;
        if(root->val!=root2->val) return false;

        if(!sym(root->left,root2->right)) return false;
        if(!sym(root->right,root2->left)) return false;
         return true;
    }
    bool isSymmetric(TreeNode* root) {
        bool a=sym(root->left,root->right);
        if(!a) return false;
        return true;
    }
};
