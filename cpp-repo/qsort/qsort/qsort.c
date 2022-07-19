#include <string.h>
#include <stdio.h>

void tcpl_qsort(char* v[], int left, int right) {    // avoid using qsort from the standard library
    int i, last;
    void swap(char* v[], int i, int j);

    // do nothing if array contains fewer than two elements
    if (left >= right) 	// do nothing if array contains fewer than two element
        return;

    swap(v, left, (left + right) / 2);
    last = left;
    for (i = left + 1; i <= right; i++)
        if (strcmp(v[i], v[left]) < 0)
            swap(v, ++last, i);
    swap(v, left, last);
    tcpl_qsort(v, left, last - 1);
    tcpl_qsort(v, last + 1, right);
}

void swap(char* v[], int i, int j) {
    char* temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
