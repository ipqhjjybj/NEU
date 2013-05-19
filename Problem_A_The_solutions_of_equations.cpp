#include <iostream>
#include <cmath>
int a,b,z,n;
int min(int a,int b){
	return a < b ? a : b;
}
int main(){
	int total;
	while(scanf("%d %d %d %d",&a,&b,&z,&n) != EOF){
		total = 0;
		b = min(z,b);
			for(int x = a;x <= b;x++){
				for(int y = x;y <= b;y++){
					if((int)pow(x,2) + (int)pow(y,2) == (int)pow(z,2)){
						if(x == y)
							total++;
						else
							total+=2;
					}
					if((int)pow(x,2) + (int)pow(y,2) > (int)pow(z,2))
						break;
				}

			}
		printf("%d\n",total);
	}
}