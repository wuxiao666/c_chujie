#include<stdio.h>
#include<stdlib.h>
//���������������в�ͬλ�ĸ���

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

//��ӡ���������Ƶ�����λ��ż��λ

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


// ͳ�ƶ�������1�ĸ���

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

//����������ʱ������������������������

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