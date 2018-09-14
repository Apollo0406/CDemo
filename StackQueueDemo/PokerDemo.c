#include<stdio.h>
//1.定义队列来存储手中的牌
struct queue{
	int data[9];
	int head;
	int tail;
}; 
//2.定义栈来存储桌上的牌
struct stack{
	int data[10];
	int top; //指向栈顶的标记 
}; 

int main(){
	struct queue q1,q2;
	struct stack poker;
	int i,j,t,book[10]; 
	//3.初始化俩人手中的牌和桌上的牌
	q1.head=1;q1.tail=1; 
	q2.head=1;q2.tail=1; 
	poker.top=0;
	
	//4.分别给俩人发6张牌 
	printf("请给甲发牌：");
	for(i = 1; i <= 6;i++){
		scanf("%d",&q1.data[q1.tail]);  
		q1.tail++;
	}
	printf("请给乙发牌：");
	for(j = 1; j <= 6;j++){
		scanf("%d",&q2.data[q2.tail]);  
		q2.tail++;
	}
	//5.初始化标记桌面上的牌的桶
	 for(i = 1;i<10;i++){
	 	book[i]=0;
	 }
	 //6.当俩人队列都不为空的时候进行出牌循环
	 while(q1.head<q1.tail && q2.head<q2.tail){
	 	//甲出牌
		 t = q1.data[q1.head]; 
		 //判断甲是否赢牌
		 if(book[t] == 0){

		 	//甲不赢牌，要进行牌出甲队列、入桌子栈、桶赋值三个操作
			 q1.head++;
			 poker.top++;
			 poker.data[poker.top]=t; 
			 book[t]=1;

		 } else{

		 	//甲赢牌：刚出的牌出甲队列进入甲队列队尾、倒序遍历桌子的牌，依次进甲队列、取消桶中的标记
			 q1.head++;
			 q1.data[q1.tail] = t;
			 q1.tail++;
			 while(poker.data[poker.top]!=t){
			 	book[poker.data[poker.top]] = 0;
			 	q1.data[q1.tail] = poker.data[poker.top];
			 	poker.top--;
			 	q1.tail++;
			 }

			//收回桌子上另外一张t 
			book[poker.data[poker.top]] = 0;
			q1.data[q1.tail] = poker.data[poker.top];
			q1.tail++;
			poker.top--; 
		 }

		 //7.若甲手中的牌已打完
	 	if(q1.head==q1.tail){
			break;
	 	} 
	 	//8.乙出牌 
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
		 		//每个拿回的牌的book都要置零
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
	 
	 //9.当俩人中有一个的牌被赢完时
	 if(q1.head == q1.tail){
	 	//乙赢了
		 printf("乙赢得了这场扑克游戏"); 
		 //输出乙现在手里的牌 
		 printf("乙现在手中的牌是："); 
		 for(i = q2.head;i<q2.tail;i++){
		 	printf("%d ",q2.data[i]);
		 }
		 //输出桌上的牌（如果有的话） 
		 
		 if(poker.top>0){
		 	printf("桌子上的牌：");
		 	for(i = 1;i <= poker.top;i++ ){
		 	printf("%d ",poker.data[i]);
		   }
		 }else{
		 	printf("桌子上没牌了。");
		 }
		 
	 } 
	 
	 if(q2.head == q2.tail){
	 	 printf("甲赢得了这场扑克游戏"); 
 		//输出甲现在手里的牌 
		 printf("甲现在手中的牌是："); 
		 /*wihle(q1.tail!=q1.head){
		 	printf("%d ",q1.data[--tail]);
		 }*/
		 for(i = q1.head;i<q1.tail;i++){
		 	printf("%d ",q1.data[i]);
		 }
		 //输出桌上的牌（如果有的话） 
		 
		 if(poker.top>0){
		 	printf("桌子上的牌：");
		 	for(i = 1;i <= poker.top;i++ ){
		 	printf("%d ",poker.data[i]);
		   }
		 }else{
		 	printf("桌子上没牌了。");
		 }
	 }
	 getchar();
	 getchar();
	 return 0; 

} 
