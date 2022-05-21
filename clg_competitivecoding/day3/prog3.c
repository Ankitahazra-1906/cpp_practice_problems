#include<stdio.h>
int main(){
    int a=12,b=25,c=35;
    printf("output=%d",a&b);//converts to binary first and then binary & operation
    printf("output=%d",a|b);//converts to binary first and then binary || operation
    printf("output=%d",a^b);//converts to binary first and then binary ^ operation
    printf("output=%d",~c);//-(n+1)
}