struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    public:
        TreeNode* swapBranches(TreeNode* node) {
            if (!node) return node;

            auto tmp = node->left;
            node->left = node->right;
            node->right = tmp;
            
            swapBranches(node->left);
            swapBranches(node->right);

            return node;
        }

        TreeNode* invertTree(TreeNode* root) {
            return this->swapBranches(root);
        }
};