#include<stdio.h>
abc(char arr[])
{
    printf("%c",*++arr);
    printf("%c",*arr++);
}
int main()
{
    char arr[100];
    arr[0]='a';
    arr[1]='b';
    arr[2]='c';
    arr[3]='d';
    abc(arr);
    return 0;
}
