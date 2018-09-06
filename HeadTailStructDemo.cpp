#include<stdio.h>
struct queue{
	int data[20];
	int head;
	int tail;
};

int main(){
	struct queue q;
	int i;
	int head = 1;
	int tail = 1;
	printf("ÇëÊäÈë5¸öÊı×ÖÂÒĞò£º");
	while(tail<6){
		scanf("%d",&q.data[tail]);
		tail++;
	}
	
	while(head<tail){
		printf("%d ",q.data[head]);
		head++;
			
		q.data[tail] = q.data[head];
		tail++;
		head++;
	}
} 
