#include<stdio.h>
#include<stdlib.h>

int a = 10;
int sum(int num1, int num2) {
    static int a = 0;
    printf("a %d\n",a);
    return (a=num1+num2);
}
int main()
{
    printf("a %d\n",a);
    int a = 20;
    printf("a %d\n",a);
    sum(5,3);
    printf("a %d\n",a);
    sum(6,9);
    printf("a %d\n",a);
}
