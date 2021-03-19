#include<stdio.h>
int max(int a,int b);
int main()
{
	int a,b,c;
	scanf("%d,%d",&a,&b);
	c=max(a,b);
	printf("最大数为%d",c);
	return 0;
}
int max(int a,int b)
{
   int d;
   d=a>b?a:b;
   return d;

}
