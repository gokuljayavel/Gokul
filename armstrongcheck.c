#include <stdio.h>

int main(void) {
	int n,k,r,s=0;
	scanf("%d",&n);
	k=n;
	while(n>0){
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
	}
	if(k==s)
	printf("yes");
	else
	printf("no");
	return 0;
}
