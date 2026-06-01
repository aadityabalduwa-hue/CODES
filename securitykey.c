#include<stdio.h>
int Securitykey(int arr[],int size)
{
    int i,j,count=0;
    for(i=0;i<size;i++)
    {
        int already_counted =0;
        for(j=0;j<i;j++)
        {
            if(arr[i]=arr[j])
            {
                already_counted=1;
                break;
            }

        }
        if(already_counted==0)
        {
            for(int k=i+1;k<size;k++)
            {
                if(arr[i]=arr[k])
                {
                    count++;
                    break;
                }
            }
        }
   }
   return count;
}
int main()
{
    int data[]={5,7,8,3,7,8,9,2,3};
    int n =sizeof(data)/sizeof(data[0]);
    int result=Securitykey(data,n);
    printf("securitykey=%d",result);
    return 0;

}
