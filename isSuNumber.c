#include<stdio.h>
int main(){
	int i,j,x;
	printf("你要查询多大范围内的所有素数？");
	scanf("%d",&x);
	printf("这个范围内的素数有：(0代表没有)");
	if(x>=2){
		printf("2,");
	}
	for(i=3;i<=x;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break; 
			}	
		}
		if(i==j){
				printf("%d,",i);
		}	
	}
		return 0;
} 
