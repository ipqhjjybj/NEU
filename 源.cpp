/*
#include <iostream>
#include <cmath>
#define inf 1000000
int f[220][220][35];
int map[220];
int n,k;
int min(int a,int b){
	return a < b?a:b;
}
void init(){
	for(int i = 1;i <= n;i++)
		for(int j = 1;j <= n;j++)
			for(int s = 1;s <= k;s++)
				f[i][j][s] = inf;
}
int main(){
	while(scanf("%d %d",&n,&k)!=EOF && n && k){
		for(int i = 1;i <= n;i++)
			scanf("%d",&map[i]);
		init();
		for(int i = 1;i <= n;i++)
			for(int j = i;j <= n;j++)
				for(int s = 2;s <= k;s++){
					for(int a = i; a<= j;a++)
						f[i][j][s] = min(f[i][a][s],f[a+1][j][k-s]);
				}
	}
	return 0;
}
*/