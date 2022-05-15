#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("%d\n",2000+1);//normal addition
    printf("%d\n",(int *)2000+1);//(int is of 4 bytes)
    printf("%d\n",(double*)2032-(double*)2000);//how many double values are fit into 32 byte(1 double byte=8)
}