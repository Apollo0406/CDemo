#include<stdio.h>
//创建链表并录入数据
/*
 * 分析：1.创建结构体存放节点和指针
 *		 2.定义大的循环用来循环录入数据
 *		 3.输出链表内容 
**/ 

struct node{
	int data;
	struct node *next;
}; 

int main(){
	struct node *head,*p,*q,*t;
	int n,i,x;
	head=NULL; //头指针置空 
	printf("请输入你要输入的数据个数：");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		p=(struct node *)malloc(sizeof(struct node));
		p->data= x;
		p->next=NULL;
		if(head==NULL){
			head=p;  //如果是第一个创建的结点，就让Head指针指向当前结点 
		}else{
			q->next=p; //如果不是首个结点，则让上一节点指向当前结点 
		}
		q=p;//每次都让q记住当前结点 
	}
	
	//打印输出
	t=head;
	while(t!=NULL){
		printf("%d ",t->data);
		t=t->next;
	} 
	
	return 0;
}
