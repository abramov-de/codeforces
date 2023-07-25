/*#include<stdio.h>
#include<string.h>

#define N 200000
//#define _CRT_SECURE_NO_WARNINGS


main() {
	int t; //число строк
	int n; //длина строк
	int k; //число дней (ответ)
	int a, b, c; //3 разные буквы
	static char str[N + 1]; //число символов в строке

	scanf_s("%d", &t, 200000);

	while (t--) {
		scanf_s("%s", str, 200000);
		n = strlen(str);
		k = 1;
		a = b = c = 0;

		for (int i = 0; i < n; i++) {
			if (str[i] != a && str[i] != b && str[i] != c) {
				if (a == 0)
					a = str[i];
				else if (b == 0)
					b = str[i];
				else if (c == 0)
					c = str[i];
				else
					k++, a = str[i], b = c = 0;
			}
			printf("%d\n", k);
		}
	}
}*/

#include <stdio.h>
#include <string.h>

#define N	200000
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int t;

	scanf("%d", &t);
	while (t--) {
		static char cc[N + 1];
		int n, i, k;
		char a, b, c;

		scanf("%s", cc), n = strlen(cc);
		k = 1, a = b = c = 0;
		for (i = 0; i < n; i++)
			if (cc[i] != a && cc[i] != b && cc[i] != c) {
				if (a == 0)
					a = cc[i];
				else if (b == 0)
					b = cc[i];
				else if (c == 0)
					c = cc[i];
				else
					k++, a = cc[i], b = c = 0;
			}
		printf("%d\n", k);
	}
	return 0;
}