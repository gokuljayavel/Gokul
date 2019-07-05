#include <stdio.h>

int main(void) {
	int n,i,c=1,t;
	scanf("%d",&n);
	int a[n],s[n],j;
	for(i=0;i<n;i++){
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;}}}
				s[0]=1;
		for(i=1;i<n;i++){
			if(a[i]==a[i-1])
			s[i]=s[i-1];
			else if(a[i]>a[i-1])
			s[i]=s[i-1]+1;
			c+=s[i];
		}
		printf("%d",c);
	return 0;
}
