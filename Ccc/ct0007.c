#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch1,ch2,ch3;
    printf("請輸入 2 個字元\n==>");
    ch1=getche();//不用 按 enter  自動 照順序抓 且 給值
    ch2=getche();
    
    printf("\n");
    
    printf("第一個字元是\n==>");
    putchar(ch1);

    printf("\n");

    printf("第二個字元是\n==>");
    putchar(ch2);

    printf("\n請輸入1 個字元\n==>");
    ch3=getchar();//要 按 enter  才會抓 且 給值
    printf("\n第三個字元是is \n ==>");

    putchar(ch3);

    printf("\n");


    system("pause");
    return 0;




}