#include <stdio.h>
 
int main(void) {
	long long int n,k,i,p=1;
	scanf("%lld %lld",&n,&k);
	for(i=0;i<k;i++)
	p=p*n;
	printf("%lld",p);
	return 0;
}
