#include<stdio.h>
int main()
{
	int fac(int n);
	int n,y;
	printf("请输入一个数：");
	scanf("%d",&n);
	y=fac(n);
	printf("%d的阶乘为%d",n,y);
	return 0;
}
int fac(int n)
{
	int f;
	if(n<0)
		printf("错误！");
	else if(n==0||n==1)
		f=1;
	else
		f=fac(n-1)*n;
	return f;
}
