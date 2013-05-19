/*
#include <iostream>
#include <cmath>
int f[500][500];
int n,k;
int map[500];
int dist[300][300];
int sum_dis[201][201][201]; // i,j,q  i - j µ½ qµÄ¾àÀë
int main(){
	while(scanf("%d %d",&n,&k)!=EOF && n && k){
		for(int i = 0;i < n;i++)
			scanf("%d",&map[i]);
		for(int i = 0;i < n;i++)
			dist[i][i] = 0;
		for(int i = 0;i < n;i++)
			for(int j = i+1;j < n;j++)
				dist[j][i] = dist[i][j] = map[j] - map[i];
		
	}
}
*/