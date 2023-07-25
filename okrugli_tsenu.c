/*
#include "stdafx.h"
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

main() {
	int t;
	long int m;
	long int d;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d\n", &m);
		for (int k = 0; k < 10; k++) {
			if (m < pow(10, k)) {
				d = m - pow(10, k - 1);
				printf("%d\n", d);
			}
			else if (m = pow(10, k)) {
				d = 0;
				printf("%d\n", d);
			}
		}
	}
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	long long k, t, m;
	scanf("%lld", &t);
	for (long long i = 0; i < t; i++) {
		scanf("%lld", &m);
		k = 1;
		while (k <= m) {
			k *= 10;
		}
		k /= 10;
		printf("%lld\n", m - k);
	}
	return 0;
}
