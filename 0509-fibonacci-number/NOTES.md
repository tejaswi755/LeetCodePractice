soln using top down
class Solution {
public:
int fab(int n,vector<int>&ans){
if(n==1||n==0){
return n;
}
if(ans[n]!=-1){
return ans[n];
}
ans[n]=fab(n-1,ans)+fab(n-2,ans);
return ans[n];
}
int fib(int n) {
vector<int>ans(n+1,-1);
return fab(n,ans);
}
};