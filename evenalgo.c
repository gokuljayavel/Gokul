#include <stdio.h>

int main(void) {
	int n,i,j,k=0,l;
	scanf("%d",&n);
	int a[n],b[n],c[n];
	for(i=0;i<n;i++){
		scanf("%d ",&a[i]);
		b[i]=a[i];}
		l=n;
	while(k==0){
		j=0;  
		for(i=0;i<l;i++){
			if(i%2==1)
			c[j++]=a[i];
		}
	for(i=0;i<j;i++)
	a[i]=c[i];
	if(j==1)
	k=1;
	l=j;
	}
	for(i=0;i<n;i++){
		if(a[0]==b[i]){
		printf("%d",i);
		return 0;}
	}
	return 0;
}

