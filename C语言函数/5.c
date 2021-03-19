//有问题！
#include<stdio.h>
void str(int a[],int size);
int main()
{
   int a[10],i;
   for(i=0;i<10;i++)
	   scanf("%d",&a[i]);
   str(a,10);
   for(i=0;i<10;i++)
	   printf("%d\n",a[i]);
   return 0;

}
void str(int a[],int size)
{
	int i,j,tmp;
	for(i=0;i<size-1;i++)
		for(j=0;j<size-i-1;j++)
			if(a[j]>a[j+1])
				tmp=a[j],a[j]=a[j+1],a[j+1]=tmp;
}

	
