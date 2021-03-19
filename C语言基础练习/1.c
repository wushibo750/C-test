//某个著名数列   哈哈……
#include<stdio.h>
int main()
{
	int t1=0,t2=1,display=0,num;
	scanf("%d",&num);
	printf("%d+",t2);
	display=t1+t2;
	while(display<num)
	{
        printf("%d+",display);
	   t1=t2;
	   t2=display;
	   display=t1+t2;

	}
	return 0;
}
