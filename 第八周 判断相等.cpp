#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void Deng(void)
{
	printf("������Ҫ�Ƚϵ���������\n");
	double a,b;
	scanf("%lf%lf",&a,&b);
	if(a-b<=1e-6&&-1e-6<a-b)
	{
		printf("���\n");
	}
	else
    {
   	printf("�����\n");
    } 
} 
int main(void)
{
	Deng();
	system("pause");
	return 0;
}
 
