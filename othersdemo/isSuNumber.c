#include<stdio.h>
int main(){
	int i,j,x;
	printf("��Ҫ��ѯ���Χ�ڵ�����������");
	scanf("%d",&x);
	printf("�����Χ�ڵ������У�(0����û��)");
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
