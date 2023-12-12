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
        queue<TreeNode*> node1;
        queue<TreeNode*> node2; 
        node1.push(root1);
        node2.push(root2);

        while(!node1.empty() && !node2.empty()){
            TreeNode* current1 = node1.front();
            TreeNode* current2 = node2.front(); 
            node1.pop();
            node2.pop();
            
            current1->val += current2->val; 
            if(!current1->left && current2->left) current1->left = current2->left;
            else if(current1->left && current2->left){
                node1.push(current1->left);
                node2.push(current2->left);
            }
            if(!current1->right && current2->right) current1->right = current2->right;
            else if(current1->right && current2->right){
                node1.push(current1->right);
                node2.push(current2->right);
            }
        }






        return root1;
        
    }
};