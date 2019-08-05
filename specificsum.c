#include <stdio.h>

int main(void) {
	int i,j,n,m;
	scanf("%d %d",&n,&m);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d ",&a[i]);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==m){
			printf("YES");
			return 0;}}}
	printf("NO");
	return 0;
}
