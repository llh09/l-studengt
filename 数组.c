#include<stdio.h>
int main()
   {
   	int a[2][3]={{1,2,3},{4,5,6}};
    int b[3][2];
   	int i,j;
   	
   	printf("array a:\n");
   	for( i=0; i<2; i++ ){
   		for( j=0; j<3; j++ ){
   			printf("%5d",a[i][j]);
   			if( j==2 )   printf("\n");
   			b[j][i]=a[i][j];
		   }
	   }
   	
	printf("array b:\n");
   	for( j=0; j<3; j++ ){
   		for( i=0; i<2; i++ ){
   			printf("%5d",b[j][i]);
   			if( i==1 )   printf("\n");
		   }
	   }
   	return 0;
   	 
   }
