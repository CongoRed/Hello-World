#include<stdio.h>
#include<stdlib.h>
void Max(void)
{
	printf("请输入要比较的两个数：\n");
	double a,b;
	scanf("%lf%lf",&a,&b);
    if(a>b)
	{
		printf("大数为\n%lf",a);
	}
	 else if(a<b)
	{
		printf("大数为\n%lf",b);
	}
	 else
	{
	    printf("两数相等\n");	
	} 
}
int main(void)
{
	Max();
	system("pause");
	return 0;
}
