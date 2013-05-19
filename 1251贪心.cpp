/*
#include <iostream>
#define MAXNUM 0x7fffff
using namespace std;
struct people{
	int HD,atack;
}p[10001];
int n,total,HD_len;
void init(){
	memset(p,0,sizeof(people));
	total = 0;
	HD_len = 0;
}
int cmp(const void *a ,const void *b){
	if(((struct people *)a)->atack*((struct people *)b)->HD > ((struct people *)a)->HD *((struct people *)a)->atack
	   ||((struct people *)a)->atack*((struct people *)b)->HD == ((struct people *)a)->HD *((struct people *)a)->atack && ((struct people *)a)->HD <((struct people *)b)->HD )
	   return -1;
	else return 1;
}
int main(){
	while(scanf("%d",&n) != EOF){
		init();
		for(int i = 0;i < n;i++){
			scanf("%d %d",&p[i].HD,&p[i].atack);
		}
		qsort(p,n,sizeof(p[0]),cmp);
		
		for(int i = 0;i < n;i++){
			total += (HD_len + p[i].HD) * p[i].atack;
			HD_len += p[i].HD;
		}
		printf("%d\n",total);
	}
	return 0;
}
*/