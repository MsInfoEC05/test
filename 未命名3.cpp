#include<stdio.h>
int main()
{
	int a,b,c,z;//�������ͱ��� 
	scanf("%d %d %d",&a,&b,&c);//����a b c��ֵ 
	if(a > b)//�Ƚ�a b��С 
	{
		z = a;
	}
	else
	{
		z=b;
	}
	if(z > c)//a b�����ĺ�c�Ƚϴ�С 
	{
		z = z;
	}
	else
	{
		z = c;
	}
	printf("%d\n",z);//������ֵ 
	return 0;
	
}
