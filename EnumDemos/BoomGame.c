//ը������Ϸ�������ѷ���ը����λ�ã�ɱ����������λ�ã���ֻ��һ��ը�� 
#include<stdio.h>
int main(){
	char map[20][21];
	int i,m,n,j,x,y,sum,p,q;
	int count=0; 
	//----------�����ͼ�ĳ��Ϳ�--------
	printf("�������ͼ�ĳ��Ϳ���4 5��"); 
	printf("\n"); 
	scanf("%d %d",&m,&n); 
	//---------�����ͼ����ϸ���-------
	printf("�������ͼ��ϸ���ţ�");
	printf("\n"); 
	for(i=0;i<m;i++)
			scanf("%s",map[i]);
	//--------�����ͼ-------------
	printf("��ͼ��ϸ�������£�");
	printf("\n"); 
	 for(i=0;i<m;i++)
		printf("%s\n",map[i]); 
	//--------����ѭ��������ͼ��ÿһ��------
	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
	 		//----�ж��Ƿ��ǿյ�----- 
	 		if(map[i][j]=='.') {
	 			sum=0;
	 			//---���ĸ��������----
				 //---����---- 
	 			x=i;y=j;
	 			while(map[x][y]!='#'){
	 				if(map[x][y]=='G'){
					 	sum++;
					 }
					x++;
				 }
				 
				 //---����---- 
	 			x=i;y=j;
	 			while(map[x][y]!='#'){
	 				if(map[x][y]=='G'){
					 	sum++;
					 }
					x--;
				 }
				 
			    //---����---- 
	 			x=i;y=j;
	 			while(map[x][y]!='#'){
	 				if(map[x][y]=='G'){
					 	sum++;
					 }
					y--;
				 }
				 
				//---����---- 
	 			x=i;y=j;
	 			while(map[x][y]!='#'){
	 				if(map[x][y]=='G'){
					 	sum++;
					 }
					y++;
				 }
				 
				 //---����count��ֵ---
				 if(sum>count){
				 	count = sum;
				 	p=i;
				 	q=j;
				 	//printf("sum=%d",sum);   ---debug��� 
				 } 
				// printf("p=%d,q=%d\n",p,q);  --debug��� 
			 }
		 }
	 }
	 printf("ը�����ڣ�%d,%d��λ��ʱ��ɱ���ĵ����������Ϊ��%d\n",p,q,count);
	 getchar();
	 getchar();
	 return 0;
} 
