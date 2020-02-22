#include<stdio.h>
int main()
   {
   	int n,m;
   	printf("请输入两个数：");
   	scanf("%d %d",&n,&m);
   	if( n==1) n=2;
   	
   	int i;
   	int sum=0;
   	int cnt=0;
   	for( i=n;i<=m;i++ ){
   		int d;
		int isPrime=1;
		for( d=2;d<i;d++ ){
			if( i%d==0 ){
				isPrime=0;
				break;
			   }
			}
			if( isPrime==1 ){
				sum += i;
				cnt++;
		} 
	   }
	   printf("%d %d",cnt,sum);
	   return 0;
   }
