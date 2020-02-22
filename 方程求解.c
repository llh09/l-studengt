#include<stdio.h>
#include<math.h>
int main()
   {
   	double a,b,c;
   	printf("ax^2+bx+c=0\n");
   	scanf("%lf %lf %lf",&a,&b,&c);
   	
   	double disc=b*b-4*a*c;
   	double x1,x2;
   	if( disc<0 ){
   		printf("no anwser!");
	   }
	else if( disc==0 ){
		printf("x1=x2=%f",-b/2*a);
	}
	else if( disc>0 ){
		x1=(-b+sqrt(disc))/2*a;
		x2=(-b-sqrt(disc))/2*a;
		printf("x1=%4.2f  x2=%4.2f",x1,x2);
	}
	return 0;
	} 
