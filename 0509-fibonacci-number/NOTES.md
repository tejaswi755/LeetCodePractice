if(ans[n]!=-1){
}
};
​
​
​
​
​
​
2. using tabulation
​
int fib(int n) {
vector<int>ans(n+1,-1);
if(n==0){
return 0;
}
ans[0]=0;
ans[1]=1;
for(int i=2;i<=n;i++){
ans[i]=ans[i-1]+ans[i-2];
}
return ans[n];
}