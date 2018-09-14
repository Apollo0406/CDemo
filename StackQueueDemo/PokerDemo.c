#include<stdio.h>
//1.����������洢���е���
struct queue{
	int data[9];
	int head;
	int tail;
}; 
//2.����ջ���洢���ϵ���
struct stack{
	int data[10];
	int top; //ָ��ջ���ı�� 
}; 

int main(){
	struct queue q1,q2;
	struct stack poker;
	int i,j,t,book[10]; 
	//3.��ʼ���������е��ƺ����ϵ���
	q1.head=1;q1.tail=1; 
	q2.head=1;q2.tail=1; 
	poker.top=0;
	
	//4.�ֱ�����˷�6���� 
	printf("����׷��ƣ�");
	for(i = 1; i <= 6;i++){
		scanf("%d",&q1.data[q1.tail]);  
		q1.tail++;
	}
	printf("����ҷ��ƣ�");
	for(j = 1; j <= 6;j++){
		scanf("%d",&q2.data[q2.tail]);  
		q2.tail++;
	}
	//5.��ʼ����������ϵ��Ƶ�Ͱ
	 for(i = 1;i<10;i++){
	 	book[i]=0;
	 }
	 //6.�����˶��ж���Ϊ�յ�ʱ����г���ѭ��
	 while(q1.head<q1.tail && q2.head<q2.tail){
	 	//�׳���
		 t = q1.data[q1.head]; 
		 //�жϼ��Ƿ�Ӯ��
		 if(book[t] == 0){

		 	//�ײ�Ӯ�ƣ�Ҫ�����Ƴ��׶��С�������ջ��Ͱ��ֵ��������
			 q1.head++;
			 poker.top++;
			 poker.data[poker.top]=t; 
			 book[t]=1;

		 } else{

		 	//��Ӯ�ƣ��ճ����Ƴ��׶��н���׶��ж�β������������ӵ��ƣ����ν��׶��С�ȡ��Ͱ�еı��
			 q1.head++;
			 q1.data[q1.tail] = t;
			 q1.tail++;
			 while(poker.data[poker.top]!=t){
			 	book[poker.data[poker.top]] = 0;
			 	q1.data[q1.tail] = poker.data[poker.top];
			 	poker.top--;
			 	q1.tail++;
			 }

			//�ջ�����������һ��t 
			book[poker.data[poker.top]] = 0;
			q1.data[q1.tail] = poker.data[poker.top];
			q1.tail++;
			poker.top--; 
		 }

		 //7.�������е����Ѵ���
	 	if(q1.head==q1.tail){
			break;
	 	} 
	 	//8.�ҳ��� 
	 	t = q2.data[q2.head];
	 	if(book[t] == 0){

	 		q2.head++;
	 		poker.top++;
	 		poker.data[poker.top] = t;
	 		book[t] = 1;
		 } else{
		 	q2.head++;
		 	q2.data[q2.tail] = t;
		 	q2.tail++;
		 	while(poker.data[poker.top]!=t){
		 		//ÿ���ûص��Ƶ�book��Ҫ����
				book[poker.data[poker.top]] = 0; 
		 		q2.data[q2.tail] = poker.data[poker.top];
		 		poker.top--;
		 		q2.tail++;
			 }
			book[poker.data[poker.top]]=0;
			q2.data[q2.tail] = poker.data[poker.top];
			q2.tail++;
			poker.top--;
		 }
	 }
	 
	 //9.����������һ�����Ʊ�Ӯ��ʱ
	 if(q1.head == q1.tail){
	 	//��Ӯ��
		 printf("��Ӯ�����ⳡ�˿���Ϸ"); 
		 //���������������� 
		 printf("���������е����ǣ�"); 
		 for(i = q2.head;i<q2.tail;i++){
		 	printf("%d ",q2.data[i]);
		 }
		 //������ϵ��ƣ�����еĻ��� 
		 
		 if(poker.top>0){
		 	printf("�����ϵ��ƣ�");
		 	for(i = 1;i <= poker.top;i++ ){
		 	printf("%d ",poker.data[i]);
		   }
		 }else{
		 	printf("������û���ˡ�");
		 }
		 
	 } 
	 
	 if(q2.head == q2.tail){
	 	 printf("��Ӯ�����ⳡ�˿���Ϸ"); 
 		//���������������� 
		 printf("���������е����ǣ�"); 
		 /*wihle(q1.tail!=q1.head){
		 	printf("%d ",q1.data[--tail]);
		 }*/
		 for(i = q1.head;i<q1.tail;i++){
		 	printf("%d ",q1.data[i]);
		 }
		 //������ϵ��ƣ�����еĻ��� 
		 
		 if(poker.top>0){
		 	printf("�����ϵ��ƣ�");
		 	for(i = 1;i <= poker.top;i++ ){
		 	printf("%d ",poker.data[i]);
		   }
		 }else{
		 	printf("������û���ˡ�");
		 }
	 }
	 getchar();
	 getchar();
	 return 0; 

} 
