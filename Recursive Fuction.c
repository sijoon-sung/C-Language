#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void print(int count) {
	if (count == 0) {
		return;
	}
	else {
		printf("문자열을 출력합니다\n");
		print(count - 1); //재귀
	}
}
//재귀 함수(Recursive Fuction)


int main(void) {
	int number;
	printf("문자열을 몇개 출력할까요?");
	scanf("%d", &number);
	print(number);
}


//  Combination using Recursive Function
int nCr(int n, int r) {
	if (r == 0 || r == n) {
		return 1;
	}
	else {
		return nCr(n - 1, r - 1) + nCr(n - 1, r);
	}
}


int main(void) {
	int n, r;
	scanf("%d %d", &n, &r);
	printf("%d",nCr(n,r));
	return 0;
}
