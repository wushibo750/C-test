#include<stdio.h>
int max(int a,int b,int c,int d);
int max1(int a,int b);
int main()
{
	int a,b,c,d,e;
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	e=max(a,b,c,d);
	printf("最大数是%d",e);
	return 0;
}
int max(int a,int b,int c,int d)
{   
	
	int m;
	m=max1(a,b);
	m=max1(m,c);
	m=max1(m,d);
	return m;
}

int max1(int a,int b)
{
	int c;
	c=a>b?a:b;
	return c;
}
