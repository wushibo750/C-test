//类似递增数列
#include<stdio.h>
int main()
{
	int age(int a);
	printf("第五个人的年龄为%d岁",age(5));
	return 0;
}
int age(int a)
{
	int c;
	if(a==1)
		c=10;
	else
		c=age(a-1)+2;
	return c;
}
//n的阶乘
#include<stdio.h>
int str(int a);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d的阶乘为%d",n,str(n));
	return  0;
}
int str(int a)
{
	int b;
	if(a<0)
		printf("错误！");
	else if(a==0||a==1)
		b=1;
	else
		b=str(a-1)*a;
	return b;
}
