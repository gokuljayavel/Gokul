#include <stdio.h>

int main(void) {
	int n,x;
	scanf("%d %d",&n,&x);
	int a[n],i,j,t;
	for(i=0;i<n;i++)
	scanf("%d ",&a[i]);
	for(j=0;j<x;j++){
		t=a[n-1];
		for(i=n-1;i>0;i--)
			a[i]=a[i-1];
			a[0]=t;}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
