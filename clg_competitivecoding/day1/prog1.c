#include<stdio.h>
int main(){
    int n=10;
    int *p=&n;//*p=integer pointer
    printf("%d\n",n);//print the value of n
    printf("%p\n",&n);//print the address of n in hexadecimal format
    printf("%d\n",*&n);//print the value  at address n
    printf("%d\n",*&p);//print the address of n at the pointer p
    return 0;
}