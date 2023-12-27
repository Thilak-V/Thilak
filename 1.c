#include<stdio.h>
int add(int a,int b)
{
	int ret;
		ret=a+b;
	return ret;
}
int main()
{
	int m,n,sum;
	printf("enter value for m and n \t");
	scanf("%d%d",&m,&n);
	sum=add(m,n);
	printf("sum of %d and %d is %d",m,n,sum);
	return 0;
}
	
