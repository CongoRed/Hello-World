#include<stdio.h>
#include<stdlib.h>
void Max(void)
{
	printf("������Ҫ�Ƚϵ���������\n");
	double a,b;
	scanf("%lf%lf",&a,&b);
    if(a>b)
	{
		printf("����Ϊ\n%lf",a);
	}
	 else if(a<b)
	{
		printf("����Ϊ\n%lf",b);
	}
	 else
	{
	    printf("�������\n");	
	} 
}
int main(void)
{
	Max();
	system("pause");
	return 0;
}
