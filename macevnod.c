
#include<stdio.h>
#define EVEN_ODD(x) (x%2==0)?printf("%d is even number\n",x):printf("%d is odd number\n",x)

int main()
{
int a;
printf("Enter a  value: ");
scanf("%d",&a);
EVEN_ODD(a);
return 0;
}
