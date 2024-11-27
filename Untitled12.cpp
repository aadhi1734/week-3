//sum of first and last digit
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,a,b,k;
	scanf("%d",&n);
	k=n;
	for(i=0;k!=0;i++)
	{
		k/=pow(10,i);
	}
	printf("no of digits %d\n",i);
	a=n-(n/10)*10;
	
	b=n/pow(10,i-1);
	
	printf("first is %d last is %d\n",a,b);
	printf("sum of first and last is %d",a+b);
	return 0;
}
