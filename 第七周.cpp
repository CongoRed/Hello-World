#include<stdio.h>
#include<stdlib.h>
void Fenli(float a)
{
	int b=a;
	float c=a-b;
	printf("��������:%d,С������:%f\n",b,c);
 }
void She(float a)
{
	int x=a;
	float c=a-x;
	if(c>=0.5)
	{
		x=++x;
		printf("���������%d\n",x);
	}
	else
	{
		printf("���������%d\n",x);
	}
 } 
 void Eryuan()
 {
 	printf("���ڶ�Ԫһ�η����飺ax+by=c,dx+ey=f\n");
	double a,b,c,d,e,f,i1,i2,i3,x,y;
	printf("a=");
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
    if(i1==0&&i2!=0)
    {
	    printf("�޽�\n");
	}
	else if(i1==0&&i2==0)
	{
		printf("������\n"); 
	}
	else if(i1!=0&&i2!=0)
	{
		x=i2/i1;
		y=i3/i1;
		printf("x=%lf\n",x);
		printf("y=%lf\n",y);
    }
 }
 int main(void)
 {
 	printf("������Ҫ���������"); 
 	float a;
 	scanf("%f",&a);
 	Fenli(a);
 	printf("������Ҫ�������������");
 	float b;
 	scanf("%f",&b);
 	She(b);
 	Eryuan();
 	system("pause");
 	return 0;
 }
