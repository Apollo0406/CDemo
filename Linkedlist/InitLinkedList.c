#include<stdio.h>
//��������¼������
/*
 * ������1.�����ṹ���Žڵ��ָ��
 *		 2.������ѭ������ѭ��¼������
 *		 3.����������� 
**/ 

struct node{
	int data;
	struct node *next;
}; 

int main(){
	struct node *head,*p,*q,*t;
	int n,i,x;
	head=NULL; //ͷָ���ÿ� 
	printf("��������Ҫ��������ݸ�����");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		p=(struct node *)malloc(sizeof(struct node));
		p->data= x;
		p->next=NULL;
		if(head==NULL){
			head=p;  //����ǵ�һ�������Ľ�㣬����Headָ��ָ��ǰ��� 
		}else{
			q->next=p; //��������׸���㣬������һ�ڵ�ָ��ǰ��� 
		}
		q=p;//ÿ�ζ���q��ס��ǰ��� 
	}
	
	//��ӡ���
	t=head;
	while(t!=NULL){
		printf("%d ",t->data);
		t=t->next;
	} 
	
	return 0;
}
