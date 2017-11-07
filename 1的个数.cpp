#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	int a,b,c,d=0;
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		for(c=0;c<10;c++)
		{
			int e=b/pow(10,c);
			if(e%10==1)
			{
				d=d+1;
			}
		}
	}
	printf("%d",d);
	system("pause");
	return 0;
}
