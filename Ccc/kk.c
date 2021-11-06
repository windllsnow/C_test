#include<stdio.h>
#include<stdlib.h>

#include<time.h>
int main(void)
{
    int i;
    double* a[5];
    printf("樂透號碼產生器:\n");
   
    srand(time(NULL));
    for(i=0;i<=5;i++)
    {
       
        *a[i]= 1+42*rand()/RAND_MAX;
        printf("%3.0f\n",a[i]);
         
    }
    printf("\n祝您中獎!!!\n");

    system("pause");
    return 0;




}