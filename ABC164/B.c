#include<stdio.h>

int main(void) {
	int a = 0, b = 0, c = 0, d = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	//����Z�؂�グ�̌v�Z�̍H�v
	int dta = (c + b - 1) / b;	// dead time aoki
	int dtt = (a + d - 1) / d;	// dead time takahashi
	if (dta <= dtt) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
}