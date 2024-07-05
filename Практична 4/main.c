#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
int main() {
	setlocale(LC_ALL, "Ukr");
	int n, count = 0;

	printf("Введiть натуральне число n (1 < n < 150): ");
	scanf("%d", &n);

	if (n <= 1 || n >= 150) {
		printf("Невiрний вхiд. Значення n повинно бути в дiапазонi вiд 2 до 149.\n");
		return 1;
	}

	for (int m = 1; m < n; m++) {
		if (n / m == n % m) {
			count++;
		}
	}

	printf("Кiлькiсть рiвних дiльникiв числа %d: %d\n", n, count);

	return 0;
}