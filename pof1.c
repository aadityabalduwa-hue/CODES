#include<stdio.h>
int function(int x,int y)
{
    return(x-(x==y));
}
int main()
{
    
    int a=25,b=24+1,c;
    printf("%d",function(a,b));
    return 0;
}
// return(25-(25==25))
//return(25-1)
// return(24)