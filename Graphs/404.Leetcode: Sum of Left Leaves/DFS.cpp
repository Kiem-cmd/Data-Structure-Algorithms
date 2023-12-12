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
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root->left && !root->right) return 0;

        stack<TreeNode*> node;
        stack<int> temp;
        int result = 0;
        node.push(root);
        temp.push(2);
        while(!node.empty()){
            TreeNode* current = node.top();
            node.pop();
            if(!current->left && !current->right && temp.top() == 0){
                result += current->val;
            }
            temp.pop();
            if(current->left){
               node.push(current->left);
               temp.push(0);
            }
            if(current->right){
                node.push(current->right);
                temp.push(1);
            }

            cout<<result<<"-";
        }
        return result;
    }
};