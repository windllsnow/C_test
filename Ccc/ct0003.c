#include<stdio.h>
#include<stdlib.h>

int main(){
    int i;
    i=234;
    int j=-345;
    printf("%d\n",i);
    printf("%2d\n",i);
    printf("__\n");
    printf("/%7d/\n",i);// 給7byte, 向右
    printf("/%-7d/\n",i);// 給7byte, 向左
    printf("__\n");
    printf("/%+7d/\n",i);//顯示+/-
    printf("/%+7d/\n",j);//顯示+/-
    printf("_\n");
    printf("/%07d/\n",i);// 給7byte,向右，前補0

    system("pause");
    return 0;

}