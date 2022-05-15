#include<stdio.h>
int main(void){
int a=10;
void*pa=&a;
void **ppa=&pa;
//printf("%d",(int)*pa);
printf("%d",*(int *)pa);
//printf("%d",**ppa);
printf("%d",*(int*)*ppa);
printf("%d",**(int**)ppa);
}