//decimal to binary::::
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,b,k;
	scanf("%d",&b);
	k=n;
	for(i=0;k!=0;i++)
	{
		k/=pow(10,i);
	}
	
	for(j=0,b=0;j<i-1;j++)
	{
		b+=(n%2)*(int)pow(10,i-1-j);
		n/=2;
	}
	printf("%d",b);
	return 0;
}
