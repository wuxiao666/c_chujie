#include<stdio.h>
#include<stdlib.h>
//��������ÿһλ���

//int DigitSum(int n){
//	if (n>9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
 
//int fun(int n, int k){
//	if (k == 0)
//		return 1;
//	else if (k >= 1){
//		return n*fun(n, k - 1);
//	}
//}

//����쳲�������

//int RecursiveFib(int n){
//	if (n == 1) {
//		return 1;
//	}
//	if (n == 2){
//		return 1;
//	}
//	return RecursiveFib(n - 1) + RecursiveFib(n - 2);
//}
//int CycleFib(int n){
//	if (n == 1) {
//		return 1;
//	}
//	if (n == 2) {
//		return 1;
//	}
//	int last1 = 1;
//	int last2 = 1;
//	int cur = 0;
//	for (int i = 3; i <= n; i++) {
//		cur = last1 + last2;
//		last2 = last1;
//		last1 = cur;
//	}
//	return cur;
//}

//�ַ�������

//void ReverseString(char* arr){
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2){
//		ReverseString(arr + 1);
//	}
//	*(arr + len - 1) = tmp;
//}

int main(){
	char str[] = "good game" ;
	ReverseString(str);
	printf("%s\n",str);
	system("pause");
	return 0;
}