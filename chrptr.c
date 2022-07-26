#include<stdio.h>

int main() 
{
char arr[]={1,2,3,4};
        char *ptr=arr;
         ptr=ptr+1;
         printf("%d %d ",ptr ,*ptr);
         return 0;
}
