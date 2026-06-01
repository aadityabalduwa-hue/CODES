#include<stdio.h>
int main()
{
    int a=87;
    int *p1=&a;
    int **q1=&p1;
    printf("address of a=%u \n",&a);
    printf("address of p1=%u \n",&p1);
    printf("address of q1=%u \n",&q1);
    printf("address of p1=%u \n",p1);
    printf("address of p1=%u \n",q1);
    printf("value of a %d \n",a);
    printf("value of a %d \n",*p1);
    printf("value of a %d \n",*(&a));
    printf("value of a %d \n",**q1);
    return 0;
}