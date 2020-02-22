#include<stdio.h>
void exchange( int *q1,int*q2,int * q3);
void swap(int *p1,int *p2);

int main()
 {
 	int a,b,c;
 	printf("请输入三个数：");
 	scanf("%d %d %d",&a,&b,&c);
 	exchange( &a,&b,&c );
 	printf("the order is:%d %d %d",a,b,c);
 	return 0;
 }
 
 void exchange( int *q1,int *q2,int * q3)
 {
 	if( *q1<*q2 ) swap( q1,q2 );
 	if( *q1<*q3 ) swap( q1,q3 );
 	if( *q2<*q3 ) swap( q2,q3 );
 }
 
 
 void swap(int *p1,int *p2)
 {
 	int t;
 	t=*p1;
 	*p1=*p2;
 	*p2=t;
 }
