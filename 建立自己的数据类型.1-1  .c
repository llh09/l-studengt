#include<stdio.h>
//定义结构体类型
struct student
{
	int numble;
	char name[15];
	char sex[5];
	char addr[20];
};

int main( int argc,const char *argv )
{
   struct student student_1={19021016,"LH","man","mark"};
   printf("num:%d\nname:%s\nsex:%s\naddr:%s\n",student_1.numble,student_1.name,student_1.sex,student_1.addr);
   //变量名.成员名
   return 0;
}

                                  
