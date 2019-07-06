#include <stdio.h>

int main(void) {
	int n,k,i,j;
	scanf("%d %d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d ",&a[i]);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==k){
			printf("yes");
			return 0;}}}
			printf("no");
	return 0;
}
