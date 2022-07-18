#include<stdio.h>
int main()
{
int n;
printf("enter the size of an array\n");
scanf("%d",&n);
int arr[n];
int i;
for(i = 0; i < n; i++)
{
	printf("Enter the elements in an array\n");
scanf("%d",&arr[i]);
}
printf("Reversed array is:\n");
for(i = n-1; i >= 0; i--)
{
printf("%d\t",arr[i]);
}
return 0;
}
