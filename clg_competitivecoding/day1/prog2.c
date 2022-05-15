#include<stdio.h>
int main(){
    int n=10;
    int *p=&n;
    //printf("%p\n",&*n);//error becoz it does not applies on pointer type variable
    printf("%d\n",&*p);//becoz it applies on pointer type variable
    printf("%d\n",*((int *)(0x000000000061FE1C)));
    return 0;
}