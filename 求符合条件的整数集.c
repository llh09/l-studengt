#include<stdio.h>
int main()
   {
   	int a;
   	printf("enter a number(<=6)：");
   	scanf("%d",&a);
   	if( a<=6 ){
	   
   	int i,j,k;
   	int cnt=0;
   	//用 for 循环 
   	for( i=a;i<=a+3;i++ ){
   		for( j=a;j<=a+3;j++ ){
   			for( k=a;k<=a+3;k++ ){
   				if( i!=j && i!=k && j!=k ){
   					printf("%d",i*100+j*10+k);
   					cnt++;
   					if( cnt%6==0 )    printf("\n");
					else              printf(" ");
				   }
			   }
		   }
	   }
	   
	//用 while 循环  
	/*i=a;
   	while( i<=a+3 ){
   		j=a;
   		while( j<=a+3 ){
   			k=a;
   			while( k<=a+3 ){
   				if( i!=j && i!=k && j!=k ){
   					cnt++;
					printf("%d",i*100+j*10+k);
   					if( cnt%6==0 ){
   						printf("\n");
					   }else{
   							printf(" ");
						   }
				   }
				k++;   
			   }
		   j++;
		   }
   		i++;
	   }
   	*/
   }
   else printf("error!");
   	return 0;
   }
