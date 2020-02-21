#include<stdio.h>
int main()
   {
   	int n;
	int i=1;
   	int first=1;
	int t=i;
   	int sum=0;
	int d=t%10;
	int p=d;
   	int j=1;
   	scanf("%d",&n);
   	first=1;
   	while( i<n ){
   		first*=10;
   		i++;
	   }
   	//printf("%d",first);
   	i=first;
   	while( i<first*10 ){
   		t=i;
   		sum=0;
   		do{
   			d=t%10;
   			t/=10;
   			p=d;
   			j=1;
   			while( j<n ){
   				p*=d;
   				j++;
			   }
			   sum += p;
		   }while( t>0 );
		   if( sum==i ){
		   	printf("%d\n",i);
		   }
		   i++;
	   }
	   return 0;
   }
