#include<stdio.h>
int main()
   {
   	int hour1,minute1;
   	int hour2,minute2;
   	
   	printf("请输入时间1：");
   	scanf("%d %d",&hour1,&minute1);
	printf("\n请输入时间2：");
    scanf("%d %d",&hour2,&minute2);
    
    int Hour,Minute;
    Hour=hour2-hour1;
    Minute=minute2-minute1;
    
    if(Minute<0){
    	Minute+=60;
    	Hour-=1;
	}
	
	printf("时间差为：%d小时%d分",Hour,Minute);
	
	return 0;
	} 
