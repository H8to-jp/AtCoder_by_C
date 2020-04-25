#include<stdio.h>
#include<math.h>
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void) {
	int n = 0;
	scanf("%d", &n);
	double X[8], Y[8];

	rep(i, n) {
		scanf("%lf %lf", &X[i], &Y[i]);
	}

	float ans = 0;
	rep(i, n - 1) {
		for (int j = i + 1; j < n; j++) {
			double d_2 = pow(X[i] - X[j], 2) + pow(Y[i] - Y[j], 2);
			ans += sqrt(d_2);
		}
	}

	printf("%lf\n", ans * 2 / n);

	return 0;
}