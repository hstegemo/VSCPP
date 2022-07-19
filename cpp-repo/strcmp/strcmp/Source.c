#include <stdio.h>
#include <string.h>
#include "exercises.h"

/*
int _strcmp(char* s, char* t) {
	int i;

	for (i = 0; s[i] == t[i]; i++)
		if (s[i] == '\0')
			return 0;
	return s[i] - t[i];
}
*/

int _strcmp(char* s, char* t) {
	for (; *s == *t; s++, t++)
		if (*s == '\0')
			return 0;
	printf("returning %d(%c) - %d(%c) = %d\n", 
		*s,*s, 
		*t, *t, 
		*s - *t);
	return *s - *t;
}

/*
void _strcpy(char* s, char* t) {
	int i = 0;
	while ((s[i] = t[i]) != '\0')
		i++;
}
*/
/*
* void _strcpy(char* s, char* t) {
	while ((*s = *t) != '\0') {
		s++;
		t++;
	}
}
*/
void _strcpy(char* s, char* t) {
	while (*s++ = *t++)
		;
}

int main() {
	char* a = "a";
	char* b = "b";
	char str1[] = "Hello, World!";
	char str2[15];
	char _str1[] = "Goodbye, cruel World!";
	char _str2[25];

	printf("strcmp(a, b) = %d\n", strcmp(a,b));
	printf("_strcmp(a,b) = %d\n", _strcmp(a, b));
	printf("strcmp(b, a) = %d\n", strcmp(b, a));
	printf("strcmp(a, a) = %d\n", strcmp(a, a));

	printf("a = %d\n", 'a');
	printf("b = %d\n", 'b');

	_strcpy(_str2, _str1);
	strcpy(str2, str1);
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	printf("_str1 = %s\n", _str1);
	printf("_str2 = %s\n", _str2);

	printf("%d\n", strend(_str1, str1));
	printf("%d\n", strend("aaaa", "aaaaa"));
	printf("%d\n", strend("abcde", "abcde"));
	printf("%d\n", strend("abcde", "de"));

	printf("%d\n", ptr_strend(_str1, str1));
	printf("%d\n", ptr_strend("aaaa", "aaaaa"));
	printf("%d\n", ptr_strend("abcde", "abcde"));
	printf("%d\n", ptr_strend("abcde", "de"));

	printf("%d\n", ptr_strend2(_str1, str1));
	printf("%d\n", ptr_strend2("aaaa", "aaaaa"));
	printf("%d\n", ptr_strend2("abcde", "abcde"));
	printf("%d\n", ptr_strend2("abcde", "de"));

	printf("%d\n", _atoi("53150"));

	

	return 0;
}