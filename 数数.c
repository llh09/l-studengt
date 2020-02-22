#include<stdio.h>
int main()
   {
   	int n=0;
   	int x;
   	printf("请输入一个数:");
   	scanf("%d",&x);
   	//   while循环 
   	/*n++;
   	x/=10; 
	while(x>0){
   		n++;
   		x=x/10;
	   }*/
   	//    do...while循环  
   	do{
   		n++;
   		x=x/10;
	   }while(x>0);
	printf("这是一个%d位数",n);
	return 0;
   	
   	
   }
