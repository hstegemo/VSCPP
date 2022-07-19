/* Page 96:
Rewrite appropriate programs from earlier chapters and exercises with pointers
instead of array indexing. Good possibilites include getline (Chapters 1 and 4), atoi, 
itoa and their variants (Chapters 2, 3 and 4), reverse (Chapter 3), and strindex and 
getop (Chapter 4).
*/
int _atoi(char s[]) {
	int i, n;
	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}

