#include<stdio.h>
#include<stdlib.h>
// scanf (%d %d,  裡面按一個space  等於用 space 隔開  (%d %d,     (和,要緊貼%d 不然會error 
int main() {
    int i,j,k,sum;
    char ch1,ch2;
    float x1,x2,ave;
    printf("請輸入2 個字元 \n");
    scanf("%c %c",&ch1,&ch2);
    printf("2個字元的相反輸出是\n");
    printf("%c %c",ch2,ch1);
    printf("請輸入3 個整數 \n");
    scanf("%d %d %d",&i,&j,&k);
    sum=i+j+k;
    printf("總和是==> %d\n ",sum);
    printf("請輸入2 個浮點數");
    scanf("%f %f",&x1,&x2);
    ave=(x1+x2)/2.0;
    printf("平均是 %6.4f\n",ave);

    system ("pause");
    return 0;
}