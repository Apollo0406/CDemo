//炸弹人游戏：求出最佳放置炸弹的位置：杀死敌人最多的位置，但只有一颗炸弹 
#include<stdio.h>
int main(){
	char map[20][21];
	int i,m,n,j,x,y,sum,p,q;
	int count=0; 
	//----------输入地图的长和宽--------
	printf("请输入地图的长和宽：（4 5）"); 
	printf("\n"); 
	scanf("%d %d",&m,&n); 
	//---------输入地图的详细情况-------
	printf("请输入地图详细安排：");
	printf("\n"); 
	for(i=0;i<m;i++)
			scanf("%s",map[i]);
	//--------输出地图-------------
	printf("地图详细安排如下：");
	printf("\n"); 
	 for(i=0;i<m;i++)
		printf("%s\n",map[i]); 
	//--------俩重循环遍历地图的每一点------
	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
	 		//----判断是否是空地----- 
	 		if(map[i][j]=='.') {
	 			sum=0;
	 			//---分四个方向遍历----
				 //---向下---- 
	 			x=i;y=j;
	 			while(map[x][y]!='#'){
	 				if(map[x][y]=='G'){
					 	sum++;
					 }
					x++;
				 }
				 
				 //---向上---- 
	 			x=i;y=j;
	 			while(map[x][y]!='#'){
	 				if(map[x][y]=='G'){
					 	sum++;
					 }
					x--;
				 }
				 
			    //---向左---- 
	 			x=i;y=j;
	 			while(map[x][y]!='#'){
	 				if(map[x][y]=='G'){
					 	sum++;
					 }
					y--;
				 }
				 
				//---向右---- 
	 			x=i;y=j;
	 			while(map[x][y]!='#'){
	 				if(map[x][y]=='G'){
					 	sum++;
					 }
					y++;
				 }
				 
				 //---更新count的值---
				 if(sum>count){
				 	count = sum;
				 	p=i;
				 	q=j;
				 	//printf("sum=%d",sum);   ---debug语句 
				 } 
				// printf("p=%d,q=%d\n",p,q);  --debug语句 
			 }
		 }
	 }
	 printf("炸弹放在（%d,%d）位置时，杀掉的敌人数量最多为：%d\n",p,q,count);
	 getchar();
	 getchar();
	 return 0;
} 
