/*   程式名稱 : ch3_18.c                    */
/*   scanf常發生的錯誤 --- 修訂             */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    char ch;

    printf("請輸入 1 個整數 \n==>");
    scanf("%d",&i);
    printf("請輸入 1 個字元 \n==>");
    fflush(stdin);//清除緩衝區
    scanf(" %c",&ch);  /*space 在%c前 可跳過不可列印字元 */ 
    printf("整數是=%d, Ascii碼值是=%d, 字元是=%c \n",i,ch,ch);
    system("pause");
    return 0; 
}
