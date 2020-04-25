#include<stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	char S[100];
	scanf("%s", &S);

	int f = 0;
	if (n % 2 == 1) {
		f = 1;
	}
	else {
		//Void
	}
	
	for (int i = 0; i < n / 2; i++) {
		if (S[i] == S[n / 2 + i]) {
			// Void
		}
		else {
			f = 1;
		}
	}

	if (f == 0) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}

	return 0;
}