#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void Deng(void)
{
	printf("请输入要比较的两个数：\n");
	double a,b;
	scanf("%lf%lf",&a,&b);
	if(a-b<=1e-6&&-1e-6<a-b)
	{
		printf("相等\n");
	}
	else
    {
   	printf("不相等\n");
    } 
} 
int main(void)
{
	Deng();
	system("pause");
	return 0;
}
 
