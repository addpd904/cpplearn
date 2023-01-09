#include "multifileProgramme.h"
int sum(int a, int b) {
	return a + b;
}
int mul(int a, int b) {
	return a * b;
}
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
