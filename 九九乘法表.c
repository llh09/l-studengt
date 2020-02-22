#include<stdio.h>
int main()
   {
   	int a,b;
    a=1;
    
   	while( a<=9 ){
   		b=1;
		while( b<=a ){ 
   			printf("%d*%d=%d",b,a,a*b);
   			if( a*b<10 )    printf("   ");
   			else            printf("  ");
   			b++;
		   }
		printf("\n");
		a++;
	   }
   	return 0;
   	
   }
