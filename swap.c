#include <stdio.h>
int main()
{
int a,b,swap;
scanf("%d%d",&a,&b);
swap=a;
a=b;
b=swap;
printf("a=%d\n",a);
printf("b=%d",b);
}
