#include <stdio.h>

int main(void) {
	int i,n,j,lsum=0,rsum=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d ",&a[i]);
	for(i=0;i<n;i++){
		lsum+=a[i];
		rsum=0;
		for(j=i+1;j<n;j++)
			rsum+=a[j];
		if(lsum*(n-i-1)==rsum*(i+1)){
		printf("yes");
		return 0;}
	}
	printf("no");
	return 0;
}
