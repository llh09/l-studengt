#include<stdio.h>
void swap( int *point1,int *point2); 
int main()
   {
   	int a,b;
   	printf("enter two number:");
   	scanf("%d %d",&a,&b);
   	swap(&a,&b);
	printf("%d %d",a,b);
	return 0;
   }
   
void swap( int *point1,int *point2)
{
	int temp;
	temp = *point1;
	*point1 = *point2;
	*point2 = temp;
}
