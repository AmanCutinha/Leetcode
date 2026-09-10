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
    int findSum(TreeNode* root,int &cnt){
        if(root==NULL) return 0;
        cnt++;

        int lSum=findSum(root->left,cnt);
        int rSum=findSum(root->right,cnt);

        return lSum+rSum+root->val;
    }
    int averageOfSubtree(TreeNode* root) {
        if(root==nullptr) return 0;

        int cnt=0,res=0;
        int sum=findSum(root,cnt);

        if(root->val==sum/cnt) res++;
        res+=averageOfSubtree(root->left);
        res+=averageOfSubtree(root->right);
        return res;
    }
};