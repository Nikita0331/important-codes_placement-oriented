class Solution {
public:
    int countNodes(TreeNode* root) {
        if(!root)
        return 0;
        if(root!=NULL)
        return countNodes(root->left)+countNodes(root->right)+1;

        return 1;
    }
};
