/*
#include <iostream>
#include <cmath>
#define M 100005
int n,k;
long long dp[M][18];
long long w[M];
int q_a,q_b;
int max(int a,int b){
	return a>b?a:b;
}
void st_rmp(){
	int k = int(log(1.0*n)/log(2.0));
	for(int i = 0;i < n;i++){
		dp[i][0] = w[i];
	}
	for(int j = 1;j <= k;j++){
		int l = (1 <<(j)) -1;
		for(int i = 0;i + l < n;i++){
			//printf("dp[%d][%d] = %d\n",i,j,dp[i][j]);
			dp[i][j] = dp[i][j-1] & dp[i + (1 << (j-1))][j-1];
			//printf("dp[%d][%d] = %d\n",i,j,dp[i][j]);
		}
	}
}
long long que(int left,int right){
	int j = (int)(log(1.0*(right - left + 1) / log(2.0)));
	return dp[left][j] & dp[right - (1 << j) + 1][j];
}
int main(){
	long long ans;
	int flag = 0;
	while(scanf("%d %d",&n,&k) == 2){
		if(flag)
			printf("\n");
		else 
			flag = 1;
		for(int i = 0;i < n;i++){
			scanf("%lld",&w[i]);	
		}
		st_rmp();
		for(int i = 0;i < k;i++){
			scanf("%d %d",&q_a,&q_b);
			ans = w[q_a-1];
			ans = ans & que(q_a-1,q_b-1);
			printf("%lld\n",ans);
		}
		
	}
	return 0;
}
*/