#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
   {
   	srand(time(0));
   	int numble=rand()%100+1;
   	int count=0;
   	int a=0;
   	printf("我已经想好了一个数。猜猜这个1到100之间的数：");
	   	do{
	   	   //printf("猜猜这个1到100之间的数：");
	   	   scanf("%d",&a);
	   	   count++;
	   	    if(a>numble){
	   	   	    printf("你猜的数大了。"); 
		    }else if(a<numble){
		    	printf("你猜的数小了。"); 
			}
	   	   
		   }while(a!=numble);
	   printf("终于猜出了答案，共用了%d次",count);
	//printf("%d",numble);
   	return 0;
   }
