#include <stdio.h>
#include<stdlib.h>
int main(void) {
	char s[10000];
	int n;
	scanf("%s%n",s,&n);
	s[n]='.';
	s[n+1]='\0';
	printf("%s",s);
	return 0;
}
