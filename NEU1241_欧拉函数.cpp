/*
#include <iostream>
#include <cmath>
#define MAXN 5000000
int prime[MAXN],phi[MAXN+1];
int pri_shai[MAXN],pri_s;
int ans_re[MAXN+1] = {0};
int ans_arr[MAXN+1];
int n;
void init(){
	memset(ans_re,0,sizeof(ans_re));
}
void pri_deal(int N){
	for(int i = 2;i<= N;i++){
		prime[i] = 1;
		phi[i] = i;
	}
	for(int i = 2;i * i <= N;i++){
		if(prime[i]){
			for(int j = i * i;j <=N;j+=i){
				prime[j] = 0;
			}
		}
	}
	pri_s = 0;
	for(int i = 2;i <= N;i++){
		if(prime[i]){
			pri_shai[pri_s++] = i;
			for(int j = i;j <= N;j+=i){
				phi[j] = phi[j]/i*(i-1);
			}
		}
	}
	phi[1]=1;
}
int main(){
	int ans,q_j;
	init();
	pri_deal(MAXN);
	///for(int i = 2;i <= 10;i++)
		//printf("phi[%d]=%d\n",i,phi[i]);
		*/
	/*
	for(int j = 2;j < 100000;j++){
		ans = 0;
		q_j = j;
		for(int i = 0;i < pri_s && pri_shai[i] <= q_j;i++){
			//printf("pri_shai[%d]=%d\n",i,pri_shai[i]);
			if((j % pri_shai[i]) == 0){
				ans += phi[j/pri_shai[i]];
				q_j /= pri_shai[i];
				while((q_j % pri_shai[i]) == 0){
					q_j /= pri_shai[i];
				}
			}
		}
		ans_arr[j] = ans;
		//printf("ans_arr[%d]=%d\n",j,ans_arr[j]);
	}
	*/
/*
	for(int i = 0;i < pri_s;i++){
		for(int j = pri_shai[i],z=1;j < MAXN;j+=pri_shai[i],z++){
			ans_arr[j] += phi[z];
		}
	}
	ans_re[0] = 0;
	ans_re[1] = 0;
	ans_re[2] = 1;
	for(int i = 2;i < MAXN;i++){
		ans_re[i] = ans_re[i-1] + ans_arr[i];
		//printf("ans_re[%d-1] + ans_arr[%d] = ans_re[%d] £º %d + %d = %d\n",i,i,i,ans_re[i-1],ans_arr[i],ans_re[i]);
	}
	while(scanf("%d",&n)!=EOF){
		
		printf("%d\n",ans_re[n]);
	}
	return 0;
}
*/