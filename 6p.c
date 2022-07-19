/*
5
54
543
5432
54321
*/

#include<stdio.h>
int main()
{
        int i,j,n;
        printf("Enter the no of rows\n");
        scanf("%d",&n);
        for(i=n;i>0;i--)
        {
                for(j=n;j>=i;j--)
                        printf("%d",j);
        printf("\n");
        }
}
