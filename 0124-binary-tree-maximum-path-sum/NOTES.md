pair<int,int> solve(TreeNode* root){
if(root==NULL){
pair<int,int>p=make_pair(-1000,0);
return p;
}
pair<int,int>left=solve(root->left);
pair<int,int>right=solve(root->right);
int temp=left.second+right.second+root->val;
pair<int,int>ans;
ans.first=max(left.first,max(right.first,max(temp,max(left.second+root->val,max(right.second+root->val,root->val)))));
ans.second=max(left.second+root->val,max(right.second+root->val,root->val));
return ans;
}