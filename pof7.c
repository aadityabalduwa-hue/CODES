#include<stdio.h>
void fun(int n)
{
    if(n>0)
    {
        fun(--n);
        printf("%d ",n);
    }
}
int main()
{
    int a=3;
    fun(a);
    return 0;
}
// recursive function will always work as a stack filo. so the first call will be fun(3) and it will call fun(2) and then fun(1) and then fun(0). when n becomes 0 it will return and then it will print 0 and then it will return to fun(1) and print 1 and then it will return to fun(2) and print 2 and then it will return to fun(3) and print 3. so the output will be 0 1 2.