#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	printf("对于二元一次方程组：ax+by=c,dx+ey=f\n");
	double a,b,c,d,e,f,i1,i2,i3,x,y;
	printf("a=:");
	scanf("%lf",&a);
	printf("b=");
	scanf("%lf",&b);
	printf("c=");
    scanf("%lf",&c);	
	printf("d=");
	scanf("%lf",&d);
	printf("e=");
	scanf("%lf",&e);
	printf("f=");
	scanf("%lf",&f);
    i1=a*e-b*d;i2=c*e-b*f;i3=a*f-c*d;
    if(i1==0)
    {
	   if(i2==0)	
	   {
	   	printf("无数解");
	   }
	   else
	   {
	   printf("无解");
		} 
	
	}
    else
	{
		x=i2/i1;
		y=i3/i1;
		printf("x=%lf\n",x);printf("y=%lf\n",y);
	}
	system("pause");
	return 0;
}
