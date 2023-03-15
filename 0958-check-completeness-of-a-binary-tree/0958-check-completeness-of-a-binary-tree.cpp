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
    bool isCompleteTree(TreeNode* root) {
        if(root ==NULL){
            return true;
        }
        
        vector<int>temp;
        queue<TreeNode*>q;
       q.push(root);
        
        while(!q.empty()){
            TreeNode* t=q.front();
            q.pop();
             if(t==NULL){
                 temp.push_back(-1);
                 continue;
             }     
            
            temp.push_back(t->val);
            
            if(t->left){
                q.push(t->left);
            }else{
                q.push(NULL);
            }
            if(t->right){
                q.push(t->right);
            }else{
                 q.push(NULL);
            }
        }
        int n=temp.size();
    //      for(int i=0;i<n;i++){
    //    cout<<temp[i]<<" ";
    // }
    for(int i=0;i<n-1;i++){
        if(temp[i]==-1&&temp[i+1]!=-1){
            return false;
        }
    }
        
        return true;
    }
};