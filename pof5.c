// static is the reason due to which value only initalizes once
#include<stdio.h>
int fun()
{
    static int num=2;
    printf("%d",num);
    num++;
    return 0;
}
int main()
{
    fun();
    fun();
    return 0;
}