//LinkedList Insert
#include<stdio.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	int n,i,x,index,sum;
	struct node *p,*q,*head,*t,*ne;
	printf("�����ʼ�������ȣ�");
	scanf("%d",&n);
	head=NULL;
	printf("�������������ݣ�"); 
	//------------��ʼ����������------------------ 
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
	//------------���ԭʼ����----------------------- 
	t=head;
	printf("��ʼ������������Ϊ��");
	printf("\n");
	while(t!=NULL){
		printf("%d ",t->data);
		t=t->next;
	}
	//-------------�������ݵ�����ָ��λ��-------------- 
	printf("������Ҫ����������Լ�����λ�����������磨6 4��");
	printf("\n");
	sum=2;  //sum=1�Ļ��������λ�û����һ�������ﻹû��͸����������ͷ�ڵ���ɵġ� 
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
	//--------------------�����������-------------- 
	t=head;
	printf("�������������Ϊ��");
	printf("\n");
	while(t!=NULL){
		printf("%d ",t->data);
		t=t->next;
	}
	getchar();
	getchar();
	return 0;
} 
