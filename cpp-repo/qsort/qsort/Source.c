#include <stdio.h>
#include <string.h>
#define MAXLINES 5000
/* Feilsøking:
 * Sammenlikn denne koden med den i clion prosjektet!
 */

char* lineptr[MAXLINES];	// pointers to text lines

int readlines(char* lineptr[], int nlines);
void writelines(char* lineptr[], int nlines);
void tcpl_qsort(char* lineptr[], int left, int right);

int main() {
	int nlines;	// number of input lines read
	if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
		printf("Lines before sort:\n");
		writelines(lineptr, nlines);
		tcpl_qsort(lineptr, 0, nlines - 1);
		printf("Lines after sort:\n");
		writelines(lineptr, nlines);
	}
	else {
		printf("error: input too big to sort\n");
		return 1;
	}
	return 0;
}
