#include <stdio.h>
/* Page 96:q 
Write the function strend(s, t), which returns 1 if the string
t occurs at the end of the string s, and zero otherwise.*/

// return 1 if string *t occurs at the end of string *s
int strend(char* s, char* t) {
	int i = 0, j = 0;
	while (s[i++] != '\0')	;
	while (t[j++] != '\0')	;
	if (j > i) return 0;
	for (; j > 0 && s[--i] == t[--j];)	;
	if (j == 0) return 1;
	return 0;
}

int ptr_strend(char* s, char* t) {
	char* stop = t;
	while (*t++ != '\0')
		if (*s++ == '\0') return 0; // string t is longer than string s
	while (*s++ != '\0')
		;
	while (*--t == *--s)
		if(t == stop)	// string t matches the end of string s
			return 1;
	return 0;
}

int ptr_strend2(char* s, char* t) {
	char* stop = t;
	while (*t != '\0' && *s != '\0')
		t++ && s++;
	if (*t != '\0' && *s == '\0')
		return 0;	// String t is longer than string s
	while (*s != '\0')
		s++;
	while (*--s == *--t)
		if (t == stop)
			return 1;	// String t matches the end of string s.
	return 0;
}