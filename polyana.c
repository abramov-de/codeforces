#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main() {
	int t, a, b, c, d;

	scanf("%d", &t);
	while (t--) {
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if ((a & d) & (b & c))
			printf("2\n");
		else if ((a | d) | (b | c))
			printf("1\n");
		else
			printf("0\n");
	}
}