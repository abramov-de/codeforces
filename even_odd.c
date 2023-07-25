#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main() {

	int t, n;
	scanf("%d", &t);

	while (t--) {

		scanf("%d", &n);
		int a, even = 0, odd = 0;

		for (int i = 0; i < n; i++) {

			scanf("%d", &a);
			if ((a % 2) == 0)
				even += 1;
			else
				odd += 1;
		}

		printf("%d\n", even > odd ? odd : even);
	}

	return 0;
}