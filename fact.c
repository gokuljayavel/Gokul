#include <stdio.h>

int main(void) {
	unsigned long long int num,i,s=1;
	scanf("%llu",&num);
	for(i=1;i<=num;i++)
	s=s*i;
	printf("%llu",s);
	return 0;
}
