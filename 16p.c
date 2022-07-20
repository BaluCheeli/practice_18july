#include<stdio.h>
int main()
{
        int i,j,n;
        printf("enter no of rows\n");
        scanf("%d",&n);
        for(i=n;i>0;i--)
        {
                for(j=n;j>=i;j--)
                        printf("%c",96+j);
        printf("\n");
        }
}
