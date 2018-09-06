//判断是否回文---用栈来实现 
#include<stdio.h>
#include<string.h> 
int main(){
	char str[20],s[20];
	int i,len,mid,top,next;
	printf("请输入一个字符串：");
	scanf("%s",&str);
	
	len = strlen(str);
	mid = len/2 -1;

	top=0;	
	for(i=0;i<=mid;i++){
		top++;
		s[top]=str[i];
	}
	
	if(len%2==0){
		next = mid + 1;
	}
	else{
		next = mid + 2;
	}
	
	for(i = next;i<len;i++){
		if(str[i]!=s[top]){
			break;
	}
		top--;	
	}
	
	if(top==0){
		printf("yes");
	}
	else{
		printf("no");
	}
	/*int i;
	int len = strlen(str);
	for(i = 0 ; i< len;i++){
			printf("%c",str[i]);
	}*/
} 
