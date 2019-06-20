#include <stdio.h>

int main(void) {
	int n,i=0,a[5],j,k;
	scanf("%d",&n);
	while(n>0){
		a[i++]=n%10;
		n=n/10;
	}
	for(j=0,k=i-1;j<=k;j++,k--){
		if(a[j]!=a[k]){
		printf("no");
		return 0;}}
		printf("yes");
	return 0;
}
