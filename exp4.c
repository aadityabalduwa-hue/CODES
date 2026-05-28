#include<stdio.h>
#define FALSE -1
#define NULL 0
#define TRUE 1
int main(){
    if(NULL){
        printf("null");
    }
    else if(FALSE)
    {
        printf("TRUE");
    }
    else {
        printf("FALSE");

    }
    return 0;

}