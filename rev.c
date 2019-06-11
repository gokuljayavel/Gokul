#include <stdio.h>

int main(void) {
	long long int num,rev=0;
	scanf("%lld",&num);
	while(num>0){
		rev=rev*10+(num%10);
		num/=10;
	}
	printf("%lld",rev);
	return 0;
}
