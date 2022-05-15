#include<stdio.h>
int main(){
   int i=10;
   int*p=&i;
   *p=20;
   *p=(*p+1);
   printf("%d\n\n",++(*p)) ;
   printf("%d",(*p)++);
}