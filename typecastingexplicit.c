//explicit type casting is used to convert one data type to other
#include<stdio.h>
int main()
{
    int a=66;
    char *c;
    c=(char*)&a;
    printf("%d\n",*c);
    printf("%c\n",*c);
    return 0;
} 