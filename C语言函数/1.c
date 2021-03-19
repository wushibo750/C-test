#include<stdio.h>
int main()
{
	void str1(void);
	void str2(void);
	
	str1();
	str2();
	str1();
    return 0;
}
void str1(void)
{
	printf("**********\n");
}
void str2(void)
{
	printf("hello world!\n");
}
