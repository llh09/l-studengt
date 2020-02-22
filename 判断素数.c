#include<stdio.h>
int main()
   {
   	int x;
   	scanf("%d",&x);
   	
   	int i;
   	int isPrime=1;
   	for(i=2;i<x;i++){
   		if(x%i==0){
   			isPrime=0;
   			break;// break：跳出循环；contiune：跳过本轮循环，进入下一轮 
		   }
	   }
	if(isPrime==1){
		printf("%d是素数",x);
	}else {
		printf("%d不是素数",x);
	}
	return 0;
	} 
