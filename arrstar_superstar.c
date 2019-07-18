#include <stdio.h>

int main(void) {
	int n,i,j,f=0,l=0,k;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d ",&a[i]);
	for(i=0;i<n-1;i++){
		f=0;
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
			f=1;
			break;}}
		if(f==0)
		printf("%d ",a[i]);
	}
	printf("%d\n",a[n-1]);
	for(i=0;i<n;i++){
		f=0;
		l=0;
		for(j=0;j<i-1;j++){
			if(a[i]<a[j]){
			f=1;
			break;}}
		for(k=i+1;k<n;k++){
			if(a[i]<a[k]){
				l=1;
				break;}}
		if(f==0 && l==0)
		printf("%d ",a[i]);
	}
	return 0;
}
