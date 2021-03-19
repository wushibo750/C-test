//2到你输入的那个数这个范围内一共有多少个素数
#include<stdio.h>
int main()
{
	int flag,a,i,j,count=0;
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		flag=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag)
		{
			count++;
			printf("%d\n",i);
			
		}

	}
	printf("一共有%d个质数",count);
   return 0;
}
