#include <stdio.h>

int main(void) {
	unsigned long long int num,s=0,r;
	scanf("%llu",&num);
	while(num>0){
		r=num%10;
		s=s+(r*r);
		num/=10;}
	printf("%llu",s);
	return 0;
}
