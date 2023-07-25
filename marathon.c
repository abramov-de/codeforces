#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main() {

	int t, a, b, c, d;
	scanf("%d", &t);

	while (t--) {
		int count = 0;
		scanf("%d%d%d%d", &a, &b, &c, &d);

		if (b > a)
			count += 1;
		if (c > a)
			count += 1;
		if (d > a)
			count += 1;
		printf("%d\n", count);
	}
}