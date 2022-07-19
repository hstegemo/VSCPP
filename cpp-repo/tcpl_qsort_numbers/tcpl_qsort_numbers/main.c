#include <stdio.h>
tcpl_qsort(int v[], int i, int j);

print_numbers(int* v, int n) {
	for (int i = 0; i < n; i++)
		printf("%d ", v[i]);
	puts("");
}

int main() {
	int arr[] = { 7, 4, 6, 8, 2, 1, 9, 0, 3, 5 };
	print_numbers(arr, sizeof(arr) / sizeof(int));
	tcpl_qsort(arr, 0, sizeof(arr) / sizeof(int)-1);
	print_numbers(arr, sizeof(arr) / sizeof(int));

	return 0;
}