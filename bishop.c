#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main() {
	int t;
	char a[8][8];
	int r;
	int c;

	scanf("%d", &t);

	while (t--) {
		for (int i = 0; i < 8; ++i) {
			scanf("%s", a[i]);
		}
		
		for (int k = 1; k < 7; k++) {
			for (int l = 1; l < 7; l++) {
				if (a[k][l] == '#' && a[k - 1][l - 1] == '#' && a[k - 1][l + 1] == '#' && a[k + 1][l + 1] == '#' && a[k + 1][l - 1] == '#') {
					r = k;
					c = l;
				}
			}
		}
		printf("%d %d\n", r + 1, c + 1);
	}
	return 0;
}