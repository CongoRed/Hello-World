#include<stdio.h>
#include<stdlib.h>
bool zhishu(int a)
{
	int i;
	if(a<=1)
	{
		return false;
	}
	else
	{
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			{
				return false;
				break;
			}
		}
		return true;
	}
}
int sum(int x)
{
	int he=0;
	while(x!=0)
	{
		int a=x%10;
		x=x/10;
		he=he+a;
	}
	return he;
}
int cheng(int x)
{
	int ji=1;
	while(x!=0)
	{
		int a=x%10;
		x=x/10;
		ji=ji*a;
	}
	return ji;
}
int FH(int x)
{
	int fh=0;
	while(x!=0)
	{
		int a=x%10;
		x=x/10;
		fh=fh+a*a;
	}
	return fh;
}
int main(void)
{
	int j,ge=0,he=0,max;
	for(j=100;j<10000;j++)
	{
        if(zhishu(j))
		{
		    int a=sum(j);
		    int b=cheng(j);
		    int c=FH(j);
		    if(zhishu(a)&&zhishu(b)&&zhishu(c))
		    {
		    	printf("%d\n",j);
		    	ge=ge+1;
		    	he=he+j;
		    	max=j;
			}
		}
	}
	printf("个数：%d\n",ge);
	printf("和:%d\n",he);
	printf("最大：%d",max);
}
