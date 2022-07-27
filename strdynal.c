#include<stdio.h>
#include<stdlib.h>

struct stu{
int a;
char b;
int c;
};

int main()
{
struct stu *s;
s=(struct stu *)malloc(sizeof(struct stu));

free(s);
}
