//求1-100以内的素数 
/*#include<stdio.h> 
int main()
   {
   	int x;
   	for(x=1;x<101;x++){
	   	int i;
	   	int isPrime=1;
	   	for(i=2;i<x;i++){
	   		if(x%i==0){
	   			isPrime=0;
	   			break;// break：跳出循环；contiune：跳过本轮循环，进入下一轮 
			   }
		   }
		if(isPrime==1){
			printf("%d是素数\n",x);
        	}
        }      
	return 0;
	} */
//前50个素数
#include<stdio.h> 
int main()
   {
   	int x;
   	int cnt=0;
   	for(x=1;cnt<50;x++){
	   	int i;
	   	int isPrime=1;
	   	for(i=2;i<x;i++){
	   		if(x%i==0){
	   			isPrime=0;
	   			break;// break：跳出循环；contiune：跳过本轮循环，进入下一轮 
			   }
		   }
		if(isPrime==1){
			cnt++; 
			printf("%d\t",x);
			if(cnt%5==0){
				printf("\n");
			}
        	}
        }      
	return 0;
	} 
