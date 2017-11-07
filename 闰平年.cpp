#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d;
	printf("请输入年份：\n");
	scanf("%d",&a);
	b=a%100;
	c=a%400;
	d=a%4;
	if(b==0)
	{
		if(c==0)
		{
			printf("闰年\n"); 
		}
		else
		{
			printf("平年\n"); 
		}
	}
	else if(d==0)
	{
		printf("闰年\n");
	}
	else
	{
		printf("平年\n"); 
	}
	system("pause");
	return 0; 
}
