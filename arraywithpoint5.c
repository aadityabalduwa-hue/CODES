#include<stdio.h>
int main()
{
    int i;
    int arr[5]={5,10,15,20,25};
    for(i=0;i<5;i++)
    {
        printf("value of a[%d]\n",i);
        printf("%d \n",arr[i]);
        printf("%d \n",i[arr]);
        printf("%d \n",*(arr+i));
        printf("%d \n",*(i+arr));
    }
    return 0;
}