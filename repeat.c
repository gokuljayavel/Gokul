#include <stdio.h>

int main(void) {
	long long int num,i,s;
	scanf("%lld",&num);
	long long int arr[num];
	for(i=0;i<num;i++)
	scanf("%lld ",&arr[i]);
	s=arr[0];
	for(i=1;i<num;i++)
	s=s^arr[i];
	printf("%lld",s);
	return 0;
}
