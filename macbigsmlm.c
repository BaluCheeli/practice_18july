#include<stdio.h>
#define MAX(a,b) (a>b)?a:b

int main()
{
int a,b,r;
printf("Enter a and b value: ");
scanf("%d %d",&a,&b);
r=MAX(a,b);
printf("Max = %d\n",r);

return 0;
}
