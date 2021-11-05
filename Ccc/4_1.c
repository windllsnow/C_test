#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b;
	int total;
	printf("請輸入a=？");
	scanf("%d", &a);
	printf("請輸入b=？");
	scanf("%d", &b);
	total = a * b;
	printf("a*b= %5d\n", total);

	system("pause");
	return 0;


}