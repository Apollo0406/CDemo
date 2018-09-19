//LinkedList Insert
#include<stdio.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	int n,i,x,index,sum;
	struct node *p,*q,*head,*t,*ne;
	printf("输入初始化链表长度：");
	scanf("%d",&n);
	head=NULL;
	printf("请输入链表数据："); 
	//------------初始化链表数据------------------ 
	for(i=0;i<n;i++){
		p = (struct node *)malloc(sizeof(struct node));
		scanf("%d",&p->data);
		p->next=NULL;
		if(head==NULL){
			head=p;
		}else{
			q->next=p;
		}
		q=p;
	}
	//------------输出原始链表----------------------- 
	t=head;
	printf("初始化结束的链表为：");
	printf("\n");
	while(t!=NULL){
		printf("%d ",t->data);
		t=t->next;
	}
	//-------------插入数据到链表指定位置-------------- 
	printf("请输入要插入的数，以及它的位置索引：例如（6 4）");
	printf("\n");
	sum=2;  //sum=1的话，插入的位置会后推一个。这里还没想透彻。估计是头节点造成的。 
	scanf("%d %d",&x,&index);
	t=head;
	while(t!=NULL){
		if(sum==index){
			ne = (struct node *)malloc(sizeof(struct node));
			ne->data=x;
			ne->next=t->next;
			t->next=ne;
			break;
		}
		sum++;
		t=t->next;
	} 
	//--------------------输出链表数据-------------- 
	t=head;
	printf("插入结束的链表为：");
	printf("\n");
	while(t!=NULL){
		printf("%d ",t->data);
		t=t->next;
	}
	getchar();
	getchar();
	return 0;
} 
