#include<stdio.h>
#include<stdlib.h>
int* fun()
{
    int *ptr1=(int*)malloc(sizeof(int));
    *ptr1=10;
    return ptr1;
}
int main()
{
    int *ptr=fun();
    printf("%d",*ptr);
    return 0;
}
// malloc is used to create dynamic memory allocation and it returns the address of the allocated memory. so we can store the value in that address and return the pointer to that address. in this case we are storing 10 in the allocated memory and returning the pointer to that memory. in main function we are dereferencing the pointer to get the value stored in that memory which is 10.