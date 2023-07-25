#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int t, n;
	scanf("%d", &t);

	while (t--) {
		scanf("%d", &n);
		int s[200000], f[200000];

		for (int i = 0; i < n; i++) {
			scanf("%d", &s[i]);
		}
		for (int i = 0; i < n; i++) {
			scanf("%d", &f[i]);
		}

		printf("%d ", f[0] - s[0]);

		for (int i = 1; i < n; i++) {
			if (s[i] > f[i - 1])
				printf("%d ", f[i] - s[i]);
			else
				printf("%d ", f[i] - f[i - 1]);
		}

		printf("\n");
	}

	return 0;
}