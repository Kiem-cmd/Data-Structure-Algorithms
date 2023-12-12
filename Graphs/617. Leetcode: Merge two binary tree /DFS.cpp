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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2) return nullptr; 
        if(!root1 || !root2) return root1? root1:root2;  
        
        stack<TreeNode*> temp1; 
        stack<TreeNode*> temp2;
        temp1.push(root1); 
        temp2.push(root2); 

        while(!temp1.empty() && !temp2.empty()){ 
            TreeNode* current1 = temp1.top();
            TreeNode* current2 = temp2.top();
            temp1.pop();
            temp2.pop();
            current1->val += current2->val;
            if(current1->left && current2->left){
                temp1.push(current1->left);
                temp2.push(current2->left);
            }
            else if(!current1->left && current2->left){
                current1->left = current2->left;
            }
            if(current1->right && current2->right){
                temp1.push(current1->right);
                temp2.push(current2->right);
            }
            else if(!current1->right && current2->right){
                current1->right = current2->right;
            }
        }
        return root1;
    }
};