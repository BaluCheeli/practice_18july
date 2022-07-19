#include<stdio.h>
int k=0;
int main()
{
        int i,j,n;
        printf("enter the no of rows\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(j=i;j>0;j--)
                {k=++k;
                        printf("%d ",k*k);
                }
        printf("\n");
        }
}
