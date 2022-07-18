/*
 *5
 44
 333
 2222
 11111

 */

#include<stdio.h>

int main()
{
int i,j,n;
printf("enter the no of lines\n");
scanf("%d",&n);
for(i=1;i<n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d ",(n+1-i));

}
printf("\n");

}
return 0;
}

