#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void my_memcpy(void *dest,void const *src ,size_t n )
{
char *csrc =(char*)src;
char *cdest=(char*)dest;
for(int i=0;i<n;i++)
{
cdest[i]=csrc[i];
}
}

int main()
{
//char csrc[]="hello";
char csrc[100];
char cdest[100];

printf("enter the string to be copied \n");
//scanf("%^[%]s",csrc);
gets(csrc);
my_memcpy(cdest,csrc,strlen(csrc)+1);
printf("after copied %s",cdest);
return 0;
}
