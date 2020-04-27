#include<stdio.h>

int main(void) {
	int s = 0, w = 0;
	scanf("%d %d", &s, &w);
	if (s <= w) {
		printf("unsafe\n");
	}
	else {
		printf("safe\n");
	}

	return 0;
}