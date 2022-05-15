#include<stdio.h>
int main(){
    int n=10;
    //printf("%d\n",&n[0]);//outside integer also inside integer,inside should be pointer
    printf("%d\n",(&n)[0]);//parenthesis is given
    printf("%d\n",0[&n]);//pointer +integer//*(&n+0)//&n
    printf("%d\n",(&n+5)[-5]);//*(&n+20-20)//&n
    printf("(-5)[&n+5]=%d\n",(-5)[&n+5]);

}