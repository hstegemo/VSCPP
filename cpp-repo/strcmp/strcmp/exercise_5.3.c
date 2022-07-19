/* Page 96: 
Write a pointer version of the function strcat that we showed in 
chapter 2: strcat(s,t) copies the string t to the end of s.*/

// strcat from chapter 2, page 45 (Google Books)
void strcat(char s[], char t[]) {
	int i, j;

	i = j = 0;
	while (s[i] != '\0')				// find end of s
		i++;
	while ((s[i++] = t[j++]) != '\0');	// copy t
}