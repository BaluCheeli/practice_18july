/*
5
45
345
2345
12345
*/
#include<stdio.h>
int main()
{
        int i,j,n;
        printf("enter the no of rows`\n");
        scanf("%d",&n);
        for(i=n;i>0;i--)
        {
                for(j=i;j<=n;j++)
                        printf("%d",j);
        printf("\n");
        }
}
