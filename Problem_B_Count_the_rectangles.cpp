#include <iostream>
int n,m;
int a[105][105];

int main(){
	int total;
	while(scanf("%d %d",&n,&m)!=EOF){
		total = 0;
		for(int i = 1;i <= n;i++)
			for(int j = 1;j <= m;j++){
				scanf("%d",&a[i][j]);
			}
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= m;j++){
				if(a[i][j])
				for(int ia = i+1;ia <=n;ia++)
					if(a[ia][j] )
					for(int ja = j+1;ja <= m;ja++){
						if(a[i][ja] && a[ia][ja]){
							total++;
						}
					}
			}	
		}
		printf("%d\n",total);
	}
	return 0;
}