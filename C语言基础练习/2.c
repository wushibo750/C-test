//判断一个数是不是回文数
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int flag=1,b,i;
	scanf("%s",&a);
	b=strlen(a);
	for(i=0;i<b/2;i++)
	{
		if(a[i]!=a[b-i-1])
			flag=0;
	}
	if(flag)
		printf("是回文");
	else
		printf("不是回文");
	return 0;

}
