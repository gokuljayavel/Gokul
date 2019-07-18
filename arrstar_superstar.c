#include <stdio.h>

int main(void) {
	int n,i,j,f=0,l=0,m=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d ",&a[i]);
	for(i=0;i<n-1;i++){
		f=0;
		if(a[i]>m)
		m=a[i];
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
			f=1;
			break;}}
		if(f==0)
		printf("%d ",a[i]);
	}
	printf("%d\n",a[n-1]);
	printf("%d",m);
	return 0;
}
