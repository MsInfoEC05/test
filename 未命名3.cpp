#include<stdio.h>
int main()
{
	int a,b,c,z;//定义整型变量 
	scanf("%d %d %d",&a,&b,&c);//输入a b c的值 
	if(a > b)//比较a b大小 
	{
		z = a;
	}
	else
	{
		z=b;
	}
	if(z > c)//a b中最大的和c比较大小 
	{
		z = z;
	}
	else
	{
		z = c;
	}
	printf("%d\n",z);//输出最大值 
	return 0;
	
}
