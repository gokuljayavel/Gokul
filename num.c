#include <stdio.h>
#include<stdlib.h>

int main(void) {
long long int num;
	scanf("%lld",&num);
	if(isalpha(num)==0){
	if(num>0)
	printf("Positive");
	else if(num==0)
	printf("Zero");
	else
	printf("Negative");
}
return 0;
}
