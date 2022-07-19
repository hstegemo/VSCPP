#include <stdio.h>
#include "header.h"

int main() {
	// using atoi
	printf("atoi(\"541\") = %d\n", atoi("541"));

	char word[] = "This is my word";
	reverse(word);
	printf("%s\n", word);
	
	// using getline
	//char str[MAXLINE];	if (getline(str, MAXLINE)) printf("%s\n", str);
	



	return 0;
}