#include<stdio.h>
int main()
{
	int i,j,n;
	printf("which number of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>0;j--)
			printf("%c",96+j);
	printf("\n");
	}
}
