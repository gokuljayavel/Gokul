#include <stdio.h>

int main(void) {
	char ch;
	scanf("%c",&ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	printf("Alphabet");
	else
	printf("No");
	return 0;
}
