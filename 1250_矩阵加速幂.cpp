/*
#include <iostream>
#define mold(a) ((a) % 100000007)
struct martx{
	long long a[3][3];
}origin,res;
int a,b,c;
long long n;
void init(){
	for(int i = 0;i < 3;i++)
		for(int j = 0;j < 3;j++){
			origin.a[i][j] = 0LL;
			res.a[i][j] = 0LL;
		}
	res.a[0][0] = c;
	res.a[1][0] = b;
	res.a[2][0] = a;
	origin.a[0][0] = 3;
	origin.a[0][1] = 2;
	origin.a[0][2] = 1;
	origin.a[1][0] = origin.a[2][1] = 1;
}
martx mult(martx x,martx y){
	martx temp;
	for(int i = 0;i < 3;i++)
		for(int j = 0;j < 3;j++){
			temp.a[i][j] = 0;
		}
	for(int i = 0;i < 3;i++)
		for(int j = 0;j < 3;j++){
			for(int k = 0;k < 3;k++){
				temp.a[i][j] += x.a[i][k] * y.a[k][j];
				temp.a[i][j] = mold(temp.a[i][j]);
			}
		}
	return temp;
}
int main(){
	while(scanf("%d %d %d %lld",&a,&b,&c,&n) != EOF){
		init();
		n -= 2LL;
		while(n){
			if(n&1)
				res = mult(origin,res);
			origin = mult(origin,origin);
			n = n/2;
		}
		printf("%lld\n",res.a[0][0]);
	}
	return 0;
}
*/