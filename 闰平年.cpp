#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d;
	printf("��������ݣ�\n");
	scanf("%d",&a);
	b=a%100;
	c=a%400;
	d=a%4;
	if(b==0)
	{
		if(c==0)
		{
			printf("����\n"); 
		}
		else
		{
			printf("ƽ��\n"); 
		}
	}
	else if(d==0)
	{
		printf("����\n");
	}
	else
	{
		printf("ƽ��\n"); 
	}
	system("pause");
	return 0; 
}
