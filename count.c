#include "count.h"

int count(int a, int b) {
	return a + b;
}

int decr(int a, int b) {
	return a - b;
}

int mult(int a, int b) {
	return a * b;
}

int calculation(int n) {
	int num = n;
	for (int i = 0; i < 10; i++) num = count(num, 1);
	num = decr(num+1, 2);
	return mult(num, 3);
}
