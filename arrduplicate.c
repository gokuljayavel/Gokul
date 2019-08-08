#include <stdio.h>

int main(void) {
	int i,j,n,f;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d ",&a[i]);
	for(i=0;i<n;i++){
		f=0;
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
			a[j]=-1;
			f=1;}}
		if(f==1)
		a[i]=-1;}
	for(i=0;i<n;i++){
	if(a[i]!=-1){
		printf("%d ",a[i]);
		break;}
	}
	return 0;
}
