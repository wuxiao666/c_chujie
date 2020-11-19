#include<stdio.h>
#include<stdlib.h>
//求两个数二进制中不同位的个数

//int fun(int m, int n){
//	int tmp = m^n;
//	int count = 0;
//	while (tmp){
//		tmp = tmp&(tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//int main(){
//	int m, n;
//	while (scanf_s("%d %d", &m, &n) == 2){
//		printf("%d\n", fun(m, n));
//	}
//	system("pause");
//	return 0;
//}
//

//打印整数二进制的奇数位和偶数位

//void PrintBit(int num){
//	for (int i = 31; i >= 1; i -= 2){
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	for (int i = 30; i >= 0; i -= 2){
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main(){
//	int num = 20;
//	PrintBit(num);
//	system("pause");
//	return 0;
//}


// 统计二进制中1的个数

//int CountOneBit(int n){
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++){
//		if (((n >> i) & 1) == 1){
//			count++;
//		}
//	}
//	return count;
//}
//
//int main(){
//	int n = 11;
//	printf("%d\n", CountOneBit(n));
//	system("pause");
//	return 0;
//}

//不允许创建临时变量，交换两个整数的内容

int main(){
	int a = 20;
	int b = 10;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a = %d,b = %d\n", a, b);
	system("pause");
	return 0;
}