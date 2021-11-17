#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch1, ch2;
    printf("請輸入2 字元\n");
    ch1=getch();
    ch2=getch();//不顯示 輸入的字元  不用按 enter
    printf("\n第一個字元是： \n");
    putchar(ch1);
    printf("\n第二個字元是： \n");
    putchar(ch2);

    printf("\n");


    system("pause");
    return 0;


}