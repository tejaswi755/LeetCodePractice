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
//     pair<int,int> solve(TreeNode* root){
        
//         if(root==NULL){
//             pair<int,int>p=make_pair(-1000,0);
//             return p;
//         }
        
//         pair<int,int>left=solve(root->left);
//         pair<int,int>right=solve(root->right);
        
//         int temp=left.second+right.second+root->val;
//         pair<int,int>ans;
//         ans.first=max(left.first,max(right.first,max(temp,max(left.second+root->val,max(right.second+root->val,root->val)))));
//         ans.second=max(left.second+root->val,max(right.second+root->val,root->val));
//         return ans;
        
//     }
    int ans(TreeNode* root,int &sol){
        if(root==NULL){
            return -10000;
        }
        int l=max(ans(root->left,sol),0);
        int r=max(ans(root->right,sol),0);
        int t=l+r+root->val;
        sol=max(sol,t);
        return root->val+max(l,r);
    }
    int maxPathSum(TreeNode* root) {
     int sol=INT_MIN;
        ans(root,sol);
        return sol;
    }
};